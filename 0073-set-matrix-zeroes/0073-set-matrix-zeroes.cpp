class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int>rowSpace(n,0);
        vector<int>colSpace(m,0);

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    rowSpace[i]=1;
                    colSpace[j]=1;
                }
            }
        }


        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                 if(rowSpace[i]||colSpace[j]){
                  matrix[i][j]=0;
                }
            }    
    }
  }
};