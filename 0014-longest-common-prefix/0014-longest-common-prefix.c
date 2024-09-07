char* longestCommonPrefix(char** strs, int strsSize) {
     if (strsSize == 0)
        return "";

    for (int i = 0; i < strlen(strs[0]); ++i) {
        for (int j = 1; j < strsSize; ++j) {
            if (i == strlen(strs[j]) || strs[j][i] != strs[0][i]) {
                char* prefix = (char*)malloc((i + 1) * sizeof(char));
                strncpy(prefix, strs[0], i);
                prefix[i] = '\0';
                return prefix;
            }
        }
    }

    char* prefix = (char*)malloc((strlen(strs[0]) + 1) * sizeof(char));
    strcpy(prefix, strs[0]);
    return prefix;
}