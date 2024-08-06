int lengthOfLastWord(char* s) {
    int length = 0;
    int i = strlen(s) - 1;

    while (i >= 0 && isspace(s[i])) {
        i--;
    }

    while (i >= 0 && !isspace(s[i])) {
        length++;
        i--;
    }

    return length;
}