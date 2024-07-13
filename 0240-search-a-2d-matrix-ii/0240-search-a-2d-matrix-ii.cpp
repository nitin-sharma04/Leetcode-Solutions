class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();

        int left = 0, right = col - 1;

        while (left < row && right >= 0) {
            int element = matrix[left][right];

            if (element == target)
                return true;
            if (element > target)
                right--;
            if (element < target)
                left ++ ;
        }
        return false;
    }
};