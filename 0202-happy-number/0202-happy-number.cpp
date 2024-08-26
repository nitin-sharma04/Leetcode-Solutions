int squareSum(int num) {
    int rem = 0, sum = 0;
    while (num != 0) {
        rem = num % 10;
        sum += (rem * rem);
        num = num / 10;
    }
    return sum;
}

bool isHappy(int n) {
    int slow = n;
    int fast = squareSum(n);
    while (fast != 1 && slow != fast) {
        slow = squareSum(slow);
        fast = squareSum(squareSum(fast));
    }
    if (fast == 1)
        return true;
    else
        return false;
}