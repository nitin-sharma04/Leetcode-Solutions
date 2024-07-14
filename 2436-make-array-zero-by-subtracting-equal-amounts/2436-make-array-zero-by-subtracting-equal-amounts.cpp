class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_set<int>unique;
        for (auto num : nums) {
            if(num!=0)
                unique.insert(num);
        }
        return unique.size();     
    }
};