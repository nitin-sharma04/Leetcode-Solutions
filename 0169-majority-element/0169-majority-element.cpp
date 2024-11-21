class Solution {
public:
    int majorityElement(vector<int>& nums) {
       map<int, int> mpp;
        int n = nums.size()/2;

        for (auto num : nums) {
            mpp[num]++;
        }
        for (auto num : mpp) {
            if (num.second >n)
                return num.first;
        }

        return -1;
    }
};