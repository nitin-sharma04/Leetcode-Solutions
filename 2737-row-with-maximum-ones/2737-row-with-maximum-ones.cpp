class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<int> result;
        int n = mat.size();
        int maxCount = INT_MIN, row = -1;
        for (int i = 0; i < n; i++) {
            int count = 0;
            for (int j = 0; j < mat[i].size(); j++) {
                if (mat[i][j] == 1)
                    count++;
            }
            if (maxCount < count) {
                maxCount = count;
                row = i;
            }
        }
        result.push_back(row);
        result.push_back(maxCount);
        return result;
    }
};