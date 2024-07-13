class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max=0;
        vector<bool>result;
        for(auto num:candies){
            if(num>max)
                max=num;
        }

        for(auto num:candies){
            if(num+extraCandies>=max)
                result.push_back(true);
            else
                    result.push_back(false);
        }
        return result;
    }
};