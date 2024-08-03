class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int leftproduct = 1,rightproduct = 1;
        int n=nums.size();
        vector<int> result(n,1);
        for (int i = 0; i < nums.size(); i++) {
                result[i]=leftproduct;
                leftproduct*=nums[i];            
        }

        for (int i = n-1; i >=0; i--) {
                 result[i]*=rightproduct;
                rightproduct*=nums[i];
        }
        
        return result;
    }
};