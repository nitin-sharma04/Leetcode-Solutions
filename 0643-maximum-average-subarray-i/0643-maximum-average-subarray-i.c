#include<math.h>
double max(double n1,double n2){
    if(n1>n2)
        return n1;
    else
    return n2;
}
double findMaxAverage(int* nums, int numsSize, int k) {
    double maxsum= 0;
    double maxavg ;
   for(int i = 0;i<k;i++){
    maxsum +=nums[i];
   } 
   maxavg = maxsum/k;
   double windowsum = maxsum;;
   
   for(int i =k ;i<numsSize;i++){
        windowsum += nums[i] -nums[i-k];
       double  winavg = windowsum/k;
        maxsum = max(maxsum,windowsum);
        maxavg = max(maxavg,winavg);
   }
   return maxavg;
}