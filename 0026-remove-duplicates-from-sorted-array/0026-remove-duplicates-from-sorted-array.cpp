class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int first = 0, second = 1;
        while (second < nums.size()) {
            if (nums[second] != nums[first]) {
                first++;
                nums[first] = nums[second];
            }
            second++;
        }
        return first+1;
    }
};