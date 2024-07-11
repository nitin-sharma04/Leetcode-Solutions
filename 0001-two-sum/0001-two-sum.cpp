class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>sum;
        vector<int>result;
        int x;

        for(int i=0;i<nums.size();i++){
            x=target-nums[i];
            if(sum.find(x)!=sum.end()){
                    result.push_back(i);
                    result.push_back(sum[x]);
            }if(sum.find(x)==sum.end()){
                sum[nums[i]]=i;
            }
        }
        return result;
    }
};