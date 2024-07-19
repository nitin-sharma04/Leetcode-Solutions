class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> result, less, equal, high;

        for (auto num: nums) {
            if (num < pivot)
                less.push_back(num);
        }

        for (auto num:nums) {
            if (num == pivot)
                equal.push_back(num);
        }

        for (auto num:nums) {
            if (num > pivot)
                high.push_back(num);
        }

        result.insert(result.end(), less.begin(), less.end());
        result.insert(result.end(), equal.begin(), equal.end());
        result.insert(result.end(), high.begin(), high.end());

            return result;
    }
};