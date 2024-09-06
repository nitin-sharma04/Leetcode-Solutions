/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) {
    char** stringArray = (char**)malloc(n * sizeof(char*));

    for (int i = 0; i < n; i++) {
        stringArray[i] = malloc(9 * sizeof(char));
        if ((i + 1) % 3 == 0 && (i + 1) % 5 == 0) {
            strcpy(stringArray[i], "FizzBuzz");
        } else if ((i + 1) % 3 == 0) {
            strcpy(stringArray[i], "Fizz");
        } else if ((i + 1) % 5 == 0) {
            strcpy(stringArray[i], "Buzz");
        } else {
            sprintf(stringArray[i], "%d", i + 1);
        }
    }
    *returnSize = n;
    return stringArray;
}