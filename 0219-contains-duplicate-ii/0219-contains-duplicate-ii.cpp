class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
    unordered_map<int, int> seen;

    for (int i = 0; i < nums.size(); i++) {
        if (seen.find(nums[i]) != seen.end()) {
            // Check if the previous index is within distance k
            if (i - seen[nums[i]] <= k) {
                return true;
            }
        }
        // Update the index of the current number
        seen[nums[i]] = i;
    }

    return false;
}
};