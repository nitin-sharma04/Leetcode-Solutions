class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> st1(nums1.begin(), nums1.end());
        vector<int> vec;
        for (int num : nums2) {
            if (st1.count(num)) {
                vec.push_back(num);
                st1.erase(num);
            }
        }
        return vec;
    }
};