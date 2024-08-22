int singleNumber(int* nums, int numsSize) {
    int i=0,res=0;
    while(i<numsSize){
        res=res^nums[i];
    i++;
    }
    return res;
}