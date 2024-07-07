class Solution {
public:
    int majorityElement(vector<int>& nums) {
       map<int, int> mpp;
        int i = 0, n = nums.size()/2;

        for (auto num : nums) {
            if (mpp.count(num)) {
                mpp[num]++;
            } else {
                mpp[num] = 1;
            }
        }
        for (auto num : mpp) {
            if (num.second >n)
                return num.first;
        }

        return -1;
    }
};