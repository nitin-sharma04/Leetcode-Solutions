class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> vec;
        while (!nums.empty()) {
            auto it1 = min_element(nums.begin(), nums.end());
            int min1 = *it1;
            nums.erase(it1);
            auto it2 = min_element(nums.begin(), nums.end());
            int min2 = *it2;
            nums.erase(it2);
            vec.push_back(min2);
            vec.push_back(min1);
        }
        return vec;
    }
};