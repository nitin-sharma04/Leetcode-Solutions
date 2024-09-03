class Solution {
public:
    void reverseString(vector<char>& s) {
         reverse(s.begin(), s.end());
        for (char c : s) {
            cout << c;
        }
        cout << endl; // To ensure the output ends with a newline.
    }
};