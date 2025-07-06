class Solution {
public:
    int countsub(vector<int>& nums, int k) {
        int count = 1, total = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (total + nums[i] <= k) {
                total += nums[i];
            } else if (count > k)
                break;
            else {
                count++;
                total = nums[i];
            }
        }
        return count;
    }
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);
        int ans = 0;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            int total = countsub(nums, mid);
            if (total <= k) {
                ans = mid;
                high = mid - 1;
            } else
                low = mid + 1;
        }
        return ans;
    }
};