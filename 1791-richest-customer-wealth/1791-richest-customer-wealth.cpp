class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int wealth, max = 0;
        for (int i = 0; i < accounts.size(); i++) {
            wealth = 0;
            for (auto num : accounts[i])
                wealth += num;
            if (wealth > max)
                max = wealth;
        }
        if (wealth != max)
            return max;
        else
            return wealth;
    }
};