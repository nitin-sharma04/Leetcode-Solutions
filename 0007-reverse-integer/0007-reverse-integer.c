int reverse(int x){
    int rem=0,num=0;
    while(x!=0){
    rem=x%10;
    if((num<INT_MIN/10)||(num>INT_MAX/10))
        return 0;
    num=num*10+rem;
    x/=10;
    }
    
    return num;
}