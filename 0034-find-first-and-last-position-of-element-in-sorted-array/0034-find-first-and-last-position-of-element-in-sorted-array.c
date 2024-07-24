/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int binarySearch(int* nums, int numsSize, int target, int isleft) {
    int result = -1, st = 0, end = numsSize - 1;
    while (st <= end) {
        int mid = st + (end - st) / 2;

        if (nums[mid] == target) {
            result = mid;
            if (isleft)
                end = mid - 1;
            else
                st = mid + 1;
        } else if (nums[mid] < target)
            st = mid + 1;
        else
            end = mid - 1;
    }

    return result;
}
int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    int* result = (int*)malloc(2 * sizeof(int));
    result[0] = binarySearch(nums, numsSize, target, 1);
    result[1] = binarySearch(nums, numsSize, target, 0);
    *returnSize = 2;
    return result;
}