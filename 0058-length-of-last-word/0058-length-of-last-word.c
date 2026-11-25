int lengthOfLastWord(char* s) {
    int length = 0;
    while (*s != '\0') {
        if (*s != ' ') {
            length++;
        } else if (*(s + 1) != '\0' && *(s + 1) != ' ') {
            length = 0;
        }
        s++;
    }
    return length;
}
