class Solution {
public:
    int checkthreshold(vector<int>& nums, int mid, int threshold) {
        int ans = 0;

        for (int i = 0; i < nums.size(); i++) {
            ans += ceil((double)nums[i] / (double)mid);
        }
        return ans;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        long long low = 1;
        long long high = *max_element(nums.begin(), nums.end());
        int ans = 0;
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (checkthreshold(nums, mid, threshold) <= threshold) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};