class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int ind = 0;
        vector<string> vec;
        map<int, string> mpp;
        for (auto num : names) {
            mpp.insert({heights[ind], num});
            ind++;
        }
        for (auto num : mpp) {
            vec.insert(vec.begin(), num.second);
        }
        return vec;
    }
};