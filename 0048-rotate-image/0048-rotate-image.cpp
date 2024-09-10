class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>>rotatematrix(n,(vector<int>(m)));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                rotatematrix[j][n-1-i]=matrix[i][j];
            }
        }
        matrix=rotatematrix;
    }

};