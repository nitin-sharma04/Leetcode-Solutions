class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty())
            return 0;
        int maxlen = 1, currlen = 1, n = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1])
                continue;
            if (nums[i] == nums[i - 1] + 1)
                currlen++;
            else {
                maxlen = max(maxlen, currlen);
                currlen = 1;
            }
        }
        maxlen = max(maxlen, currlen);
        return maxlen;
    }
};