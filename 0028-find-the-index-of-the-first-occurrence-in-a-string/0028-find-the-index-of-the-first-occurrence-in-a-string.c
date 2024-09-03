int strStr(char* haystack, char* needle) {
    int i, j;
    int Len1 = 0, Len2 = 0;
    while (haystack[Len1] != '\0') Len1++;
    while (needle[Len2] != '\0') Len2++;

    // Iterate through haystack
    for (i = 0; i <= Len1 - Len2; i++) {
        // Check if needle matches the substring in haystack
        for (j = 0; j < Len2; j++) {
            if (haystack[i + j] != needle[j]) break;
        }
        if (j == Len2) return i; 
    }
    return -1;
}