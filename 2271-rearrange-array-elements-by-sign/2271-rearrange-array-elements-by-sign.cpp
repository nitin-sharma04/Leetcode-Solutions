class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>positive;
        vector<int>negitive;

        for(auto num:nums){
            if(num>0)
                positive.push_back(num);
            else
                negitive.push_back(num);    
        }
        vector<int>result;
        int pos=0,neg=0;
        while(pos<positive.size()&&neg<negitive.size()){
            result.push_back(positive[pos]);
            result.push_back(negitive[neg]);
            pos++;
            neg++;
        }
        return result;;
    }
};