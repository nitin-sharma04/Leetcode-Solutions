class Solution {
public:
    int arrangeCoins(int n) {
        int low = 1, high = n;
        int ans = 0;
        while (low <= high) {

            long long mid = low + (high - low) / 2;
            long long sum = mid * (mid + 1) / 2;
            if (sum <= n) {
                ans = mid;
                low = mid + 1;
            } else
                high = mid - 1;
        }
        return ans;
    }
};