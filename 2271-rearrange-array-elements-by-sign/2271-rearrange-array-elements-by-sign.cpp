class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int positive = 0, negitive = 1;
        int n = nums.size();
        vector<int> result(n, 0);
        for (int i = 0; i < n; i++) {
            if (nums[i] > 0) {
                result[positive] = nums[i];
                positive += 2;
            } else {
                result[negitive] = nums[i];
                negitive += 2;
            }
        }
        return result;
    }
};