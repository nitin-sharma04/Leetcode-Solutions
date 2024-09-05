void sortColors(int* nums, int numsSize) {
    int count[3] = {0};
    for (int i = 0; i < numsSize; i++) {
        count[nums[i]]++;
    }
    int index = 0;
    for (int i = 0; i < numsSize; i++) {
        if (count[0] > 0) {
            nums[i] = 0;
            count[0]--;
        } else if (count[1] > 0) {
            nums[i] = 1;
            count[1]--;
        } else 
        nums[i]=2;
    }
}