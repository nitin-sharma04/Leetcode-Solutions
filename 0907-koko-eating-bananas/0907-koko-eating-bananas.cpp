class Solution {
public:
    long long findtotal(vector<int>& arr, int mid) {
        long long total = 0;

        for (int i = 0; i < arr.size(); i++) {
            total += ceil((double)arr[i] / (double)mid);
        }

        return total;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int k = INT_MAX;
        long long  max = *max_element(piles.begin(), piles.end());

        long long  low = 1, high = max;

        while (low <= high) {
            long long  mid = low + (high - low) / 2;

            long long totalhours = findtotal(piles, mid);

            if (totalhours <= h) {
                k = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return k;
    }
};