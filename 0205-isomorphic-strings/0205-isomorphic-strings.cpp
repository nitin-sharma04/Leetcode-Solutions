class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length())
            return false;

        unordered_map<char, char> smap, tmap;

        for (int i = 0; i < s.length(); ++i) {
            char c1 = s[i], c2 = t[i];

   
            if (smap.count(c1) && smap[c1] != c2)
                return false;

            
            if (tmap.count(c2) && tmap[c2] != c1)
                return false;

            smap[c1] = c2;
            tmap[c2] = c1;
        }
        return true;
    }
};