class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        for (int i = 0; i < arr.size(); i++) {
            int target = 2 * arr[i];
            int low = 0, high = arr.size() - 1;

            while (low <= high) {
                int mid = low + (high - low) / 2;

                if (arr[mid] == target) {
                    if (mid != i)
                        return true;
                    else {
                        // even if match found, index is same
                        // so check other occurrences
                        int left = mid - 1;
                        int right = mid + 1;
                        if (left >= 0 && arr[left] == target)
                            return true;
                        if (right < arr.size() && arr[right] == target)
                            return true;
                        break;
                    }
                } else if (arr[mid] < target)
                    low = mid + 1;
                else
                    high = mid - 1;
            }
        }
        return false;
    }
};