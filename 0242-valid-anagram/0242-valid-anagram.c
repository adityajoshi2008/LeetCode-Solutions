bool isAnagram(char* s, char* t) {
    int count[26] = {0};
    int i = 0;
    while (s[i] != '\0' && t[i] != '\0') {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
        i++;
    }
    if (s[i] != '\0' || t[i] != '\0') {
        return false;
    }
    for (int j = 0; j < 26; j++) {
        if (count[j] != 0) {
            return false;
        }
    }

    return true;
}
    