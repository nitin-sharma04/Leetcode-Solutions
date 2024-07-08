class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int operation=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%3!=0){
                operation++;
            }

        }
        return operation;
    }
};