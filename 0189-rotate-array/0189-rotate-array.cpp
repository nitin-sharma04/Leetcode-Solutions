class Solution {
public:
    void reverse(vector<int>& arr, int left, int right) {
        while (left < right) {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;

            left++;
            right--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size() - 1;
         k = k % nums.size();
         if(k==0)
            return ;
        reverse(nums, 0, n);
        reverse(nums, 0, k - 1);
        reverse(nums, k, n);
    }
};