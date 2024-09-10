class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();

        //transpose matrix
        for(int i=0;i<n;i++){
            for(int j=i+1;j<m;j++){
                 swap(matrix[i][j],matrix[j][i]);
            }
        }

        //reverse the row to perform 90 deg rotation 
        for( int i=0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};

/*
Brute solution 
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>>rotatematrix(n,(vector<int>(m))); //2d new matrix for rotate 
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                rotatematrix[j][n-1-i]=matrix[i][j];
            }
        }
        matrix=rotatematrix; // save into original 
    }

};
*/