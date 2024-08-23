/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countBits(int n, int* returnSize) {
    int count, num, i;
    *returnSize = n + 1;
    int* result = (int*)malloc((n + 1) * sizeof(int));

    for (i = 0; i <= n; i++) {
        count = 0;
        num = i;
        while (num != 0) {
            count += num & 1;

            num = num >> 1;
        }
        result[i] = count;
    }

    return result;
}