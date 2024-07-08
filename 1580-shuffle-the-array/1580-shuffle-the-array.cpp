class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>vec;
        int y=n;
        for(int x=0;x<n;x++){
            vec.push_back(nums[x]);
            vec.push_back(nums[y]);
            y++;
        }
        return  vec;
    }
};