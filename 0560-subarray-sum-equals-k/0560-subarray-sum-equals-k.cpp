class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
         unordered_map<int, int> sum_count;
        sum_count[0] = 1;
        int sum = 0;
        int total_subArray = 0;

        for (int i = 0; i < nums.size(); ++i) {
            sum += nums[i];

            if (sum_count.find(sum - k) != sum_count.end()) {
                total_subArray += sum_count[sum - k];
            }

            sum_count[sum]++;
        }

        return total_subArray;
    }
};