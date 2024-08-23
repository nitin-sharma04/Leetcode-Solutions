int minBitFlips(int start, int goal) {
    int count =0;
    start=start^goal;
    while(start!=0){
        if(start&1==1)
            count++;
        start=start>>1;    
    }
        
    return count;
}