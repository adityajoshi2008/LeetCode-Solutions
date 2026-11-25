char* toLowerCase(char* s) {
    int offset = 'a' - 'A';
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] += offset;
        }
    }
    return s;
}
