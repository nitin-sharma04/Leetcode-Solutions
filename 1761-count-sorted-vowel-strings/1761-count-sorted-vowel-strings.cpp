class Solution {
public:
    int countVowelStrings(int n) {
        vector<int> dp(5, 1);
        /*  {1,1,1,1,1} //initial vectoe with vowels
            a adds into each vowels then vector is = {1,2,2,2,2}
            e adds into each vowels then vector is = {1,2,3,3,3}
            i adds into each vowels then vector is = {1,2,3,4,4}
            u adds into each vowels then vector is = {1,2,3,4,5} */
        for (int i = 1; i < n; ++i) {
            for (int v = 1; v < 5; ++v) {
                dp[v] = dp[v] + dp[v - 1]; // add previous vowel and current vowel into current
                                           // vowel index based
            }
        }

        return accumulate(dp.begin(), dp.end(), 0); //for count the dp array all values
    }
};