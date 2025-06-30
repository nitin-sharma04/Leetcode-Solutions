class Solution {
public:
    int find(vector<int>& nums, int target, int isleft) {
        int res = -1;

        int left = 0, right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target) {
                res = mid;
                if (isleft) {
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
            } else if (nums[mid] < target)
                left = mid + 1;
            else
                right = mid - 1;
        }

        return res;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2, -1);

        ans[0] = find(nums, target, 1);
        ans[1] = find(nums, target, 0);

        return ans;
    }
};