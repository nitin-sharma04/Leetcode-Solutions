class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end()); // Sort the array to use two-pointer approach
        vector<vector<int>> ans;
        
        for (int i = 0; i < nums.size(); i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue; // Avoid duplicates for the first number
            
            for (int j = i + 1; j < nums.size(); j++) {
                if (j != i + 1 && nums[j] == nums[j - 1]) continue; // Avoid duplicates for the second number
                
                int k = j + 1;
                int l = nums.size() - 1;
                
                while (k < l) {
                    long long sum = (long long)nums[i] + nums[j] + nums[k] + nums[l]; // Handle overflow using long long
                    
                    if (sum == target) {
                        ans.push_back({nums[i], nums[j], nums[k], nums[l]});
                        
                        // Avoid duplicates for the third number
                        while (k < l && nums[k] == nums[k + 1]) k++;
                        // Avoid duplicates for the fourth number
                        while (k < l && nums[l] == nums[l - 1]) l--;
                        
                        k++;
                        l--;
                    } else if (sum < target) {
                        k++;
                    } else {
                        l--;
                    }
                }
            }
        }
        return ans;
    }
};
