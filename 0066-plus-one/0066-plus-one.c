/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int i = digitsSize - 1, carry = 1;
    for (int i = digitsSize - 1; i >= 0; i--) {
        digits[i] += carry;
        if (digits[i] == 10) {
            digits[i] = 0;
            carry = 1;
        } else {
            carry = 0;
            break;
        }
    }
    if (carry == 1) {
        int* plus_one = (int*)malloc((digitsSize + 1) * sizeof(int));
        plus_one[0] = 1;
        *returnSize = digitsSize + 1;
        for (int i = 0; i < digitsSize; i++)
            plus_one[i + 1] = digits[i];
        return plus_one;
    } else
        *returnSize = digitsSize;
    return digits;
}