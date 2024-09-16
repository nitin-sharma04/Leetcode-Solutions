class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> un;
        for (auto num : s)
            un[num]++;

        for (int i = 0; i < s.size(); i++) {
            if (un[s[i]]==1)
                return i;
        }
        return -1;
    }
};