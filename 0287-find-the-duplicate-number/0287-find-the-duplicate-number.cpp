class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int size=nums.size();
        int res=0;
        set<int>st;
        for(auto num:nums){
            if (st.find(num) != st.end())
                return num;
            st.insert(num);
        }
        return -1;
    }
};