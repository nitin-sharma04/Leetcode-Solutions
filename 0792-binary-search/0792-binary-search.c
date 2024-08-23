int search(int* nums, int numsSize, int target) {
    int st = 0, end = numsSize - 1, mid = (st+ end) / 2;;

    while (st <= end) {
        mid = (st+ end) / 2;
        if (nums[mid] == target)
            return mid;
        if (target < nums[mid]) {
            end = mid - 1;
        } else {
            st = mid + 1;
        }
        
    }
    return -1;
}