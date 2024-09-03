char* makeFancyString(char* s) {
    int n = strlen(s);
    int k = 0;
    for (int i = 0; i < n; i++) {
        if ((i + 2 < n) && (s[i] == s[i + 1]) && (s[i + 1] == s[i + 2]))
            continue;
        else {
            s[k] = s[i];
            k++;
        }
    }
    s[k] = '\0';
    return s;
}