class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0, high = nums.size() - 1;
        int min = INT_MAX;
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[low] <= nums[mid]) {
                if(nums[low]<min) min = nums[low];
                low = mid + 1;
                cout<<min;
            } else {
                if(nums[high]<min) min = nums[high];
                high = mid - 1;
                cout<<min<<endl;
            }
        }
        return min;
    }
};