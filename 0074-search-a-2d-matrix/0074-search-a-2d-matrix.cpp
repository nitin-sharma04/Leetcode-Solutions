class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int left = 0, right = (row * col)- 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            int element = matrix[mid / col][mid % col];
            if (element == target)
                return true;
            if (element < target)
                left = mid + 1;
            if (element > target)
                right = mid - 1;
        }
        return false;
    }
};