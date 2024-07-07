class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        int n=nums.size();
        double min_num,minimum=INT_MAX;
        for(int i=0;i<n/2;i++){
            auto min=min_element(nums.begin(),nums.end());
            double small=*min;
            nums.erase(min);
            auto max=max_element(nums.begin(),nums.end());    
            double large=*max;
            nums.erase(max);
            min_num=(small+large)/2;
            if(min_num<minimum)
                minimum=min_num;

        }
        return minimum;
    }
};