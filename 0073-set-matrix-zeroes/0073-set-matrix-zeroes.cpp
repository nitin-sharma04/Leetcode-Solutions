class Solution {
    void markRow(vector<vector<int>>& matrix,int i){
    int m=matrix[0].size();
    for(int j=0;j<m;j++){
        if(matrix[i][j]!=0)
            matrix[i][j]=-97;                                                
    }
    }
    void markcolumn(vector<vector<int>>& matrix,int j){
    int n=matrix.size();
    for(int i=0;i<n;i++){
        if(matrix[i][j]!=0)
            matrix[i][j]=-97;                                                
    }
    }
    
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0)
                    {
                        markRow(matrix,i);
                        markcolumn(matrix,j);
                    }
            }
        }        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==-97)
                    matrix[i][j]=0;
            }
        }
    }
};