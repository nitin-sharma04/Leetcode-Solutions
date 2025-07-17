class Solution {
public:
    char convertsmall(char ch) {
        if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
            return ch;
        else {
            char temp = ch - 'A' + 'a';
            return temp;
        }
    }
    bool validchar(char c) {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ||
            (c >= '0' && c <= '9'))
            return true;
        return false;
    }
    bool isPalindrome(string s) {
       int st = 0, end = s.size() - 1;

        while (st < end) {
            if (validchar(s[st])) {
                if (validchar(s[end])) {
                    char temp1 = convertsmall(s[st]);
                    char temp2 = convertsmall(s[end]);
                    if (temp1 == temp2) {
                        st++;
                        end--;
                    } else {
                        return false;
                    }
                } else {
                    end--;
                }
            } else {
                if (validchar(s[end])) {
                    st++;
                } else {
                    st++;
                    end--;
                }
            }
        }
        return true;
    }
};