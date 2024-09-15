class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int altitude = 0;
        multiset<int> temp;
        temp.insert(0);
        for (const auto& value : gain) {
            altitude += value;
            temp.insert(altitude);
        }
        return *temp.rbegin();
    }
};