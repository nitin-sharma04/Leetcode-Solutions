class Solution {
public:
    int countPrimes(int n) {
        vector<bool> vec(n + 1, true);

        vec[0] = false;
        vec[1] = false;
        for (int i = 2; i * i < n; i++) {
            if (vec[i]) {
                for (int j = i * i; j < n; j = j + i) {
                    vec[j] = false;
                }
            }
        }

        int count = 0;
        for (int i = 2; i < n; i++) {
            if (vec[i]) {
                count++;
            }
        }

        return count;
    }
};