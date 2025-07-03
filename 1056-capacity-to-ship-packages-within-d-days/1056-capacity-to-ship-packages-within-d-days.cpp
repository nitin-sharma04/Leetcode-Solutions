class Solution {
public:
    int finddays(vector<int>& weights, int capacity) {
        int days = 1;
        int load = 0;
        for (int i = 0; i < weights.size(); i++) {
            if (load + weights[i] > capacity) {
                days++;
                load = weights[i];
            } else {
                load += weights[i];
            }
        }

        return days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);
        int ans = INT_MAX;
        while (low <= high) {
            int mid = low + (high - low) / 2;

            int totaldays = finddays(weights, mid);

            if (totaldays <= days) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};