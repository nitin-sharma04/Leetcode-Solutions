int max(int height,int length,int maxArea){
    int area=height*length;
    if(area>maxArea)
        return area;
    else return maxArea;    
}
int maxArea(int* height, int heightSize) {
    int start=0,end=heightSize-1,maxArea=0,small=height[0];

   while(start<end){
          if(height[start]<height[end])
            small=height[start];
          else
            small=height[end];  
        maxArea=max(small,end-start,maxArea);
        if(height[start]<height[end])
            start++;
        else
            end--;  

   }

   return maxArea;
    
} 