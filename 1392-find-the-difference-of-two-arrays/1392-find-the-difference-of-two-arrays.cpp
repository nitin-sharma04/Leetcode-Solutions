class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> st1(nums1.begin(), nums1.end());
        unordered_set<int> st2(nums2.begin(), nums2.end());
        vector<int> vec1;
        vector<int> vec2;
        for (auto num : st1) {
            if (st2.find(num) == st2.end())
                vec1.push_back(num);
        }
        for (auto num : st2) {
            if (st1.find(num) == st1.end())
                vec2.push_back(num);
        }

        return {vec1, vec2};
    }
};