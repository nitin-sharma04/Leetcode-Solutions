class Solution {
public:
    bool ispossible(vector<int>& arr, int mid, int m, int k) {
        int count = 0;
        int ans = 0;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] <= mid) {
                count++;
            } else {
                ans += (count / k);
                count = 0;
            }
        }
        ans += (count / k);
        if (ans >= m)
            return true;
        else
            return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {

        if (bloomDay.size() < (m * k))
            return -1;
        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());
        int ans = 0;
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (ispossible(bloomDay, mid, m, k)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return ans;
    }
};