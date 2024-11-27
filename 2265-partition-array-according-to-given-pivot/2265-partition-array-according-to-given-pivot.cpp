class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> result, less, equal, high;

        for (auto it : nums) {
            if (it < pivot)
                less.push_back(it);
        }

        for (auto it : nums) {
            if (it == pivot)
                equal.push_back(it);
        }

        for (auto it : nums) {
            if (it > pivot)
                high.push_back(it);
        }

        result.insert(result.end(), less.begin(), less.end());
        result.insert(result.end(), equal.begin(), equal.end());
        result.insert(result.end(), high.begin(), high.end());
        return result;
    }
};