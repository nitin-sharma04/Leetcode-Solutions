class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        int left = 0, top = 0, right = col - 1, bottom = row - 1;

        vector<int> vec;
        // left----->right
        while (top <= bottom && left <= right) {
            for (int i = left; i <= right; i++) {
                vec.push_back(matrix[top][i]);
            }
            top++;
            // top----->bottom
            for (int i = top; i <= bottom; i++) {
                vec.push_back(matrix[i][right]);
            }
            right--;
            if (top <= bottom) {
                // right---->left
                for (int i = right; i >= left; i--) {
                    vec.push_back(matrix[bottom][i]);
                }
                bottom--;
            }

            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    vec.push_back(matrix[i][left]);
                } 
                left++;
            }
    }
    return vec;
}
}
;