class Solution {
public:
    int gcd(int a,int b){
        return b==0 ? a : gcd(b,a%b);
    }
    
    int findGCD(vector<int>& nums) {
        int min=nums[0],max=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]<min) min = nums[i];
            if(nums[i]>max) max = nums[i];
        }

        int res = gcd(min,max);

        return res;
    }
};