class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }
        unordered_map<char, int> count;
        for (auto num : s)
            count[num]++;
        for (auto num : t) {
            if (count[num] == 0)
                return false;
            count[num]--;
        }
        return true;
    }
};