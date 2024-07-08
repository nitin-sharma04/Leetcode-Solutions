class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int good_pairs=0;
        unordered_map<int,int>count;

        for(auto num:nums)
            count[num]++;

        for(auto num:count){
            good_pairs+=num.second*(num.second-1)/2;
        }
    return good_pairs;
    }
};