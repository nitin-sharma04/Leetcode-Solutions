int myAtoi(char* s) {
    if (s == NULL || *s == '\0') {
        return 0;
    }
    long result = 0;
    int i = 0, sign = 1;
    while (s[i] == ' ')
        i++;

    if (s[i] == '+' || s[i] == '-') {
        sign = (s[i] == '+') ? 1 : -1;
        i++;
    }

    while (s[i] >= 48 && s[i] <= 57) {
        result = result * 10 + (s[i] - 48);
        if (result*sign > INT_MAX)
            return INT_MAX;
        else if (result*sign < INT_MIN)
            return INT_MIN;

        i++;
    }

    return sign * result;
}