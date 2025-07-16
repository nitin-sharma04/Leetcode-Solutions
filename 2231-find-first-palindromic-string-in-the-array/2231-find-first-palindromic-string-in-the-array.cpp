class Solution {
public:
    bool isPalindrome(const string& s) {
        int st = 0;
        int end = s.size() - 1;
        while (st < end) {
            if (s[st] != s[end])
                return false;
            st++;
            end--;
        }
        return true;
    }

    string firstPalindrome(vector<string>& words) {
        for (const string& word : words) {
            if (isPalindrome(word))
                return word;
        }
        return "";
    }
};