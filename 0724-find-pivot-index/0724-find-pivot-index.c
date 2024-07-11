int pivotIndex(int* nums, int numsSize) {
    int totalSum = 0;

    for (int i = 0; i < numsSize; i++) {
        totalSum += nums[i];
    }

    int leftSum = 0;
    int rightSum = totalSum;

    for (int i = 0; i < numsSize; i++) {

        if (leftSum == rightSum - nums[i]) {
            return i;
        }
        leftSum += nums[i];
        rightSum -= nums[i];
    }

    return -1;
}