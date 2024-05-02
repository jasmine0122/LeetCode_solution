bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}
int maxVowels(char* s, int k) {
    int maxVowels = 0, currentVowels = 0;
    for (int i = 0; i < k; ++i) {
        if (isVowel(s[i]))
            currentVowels++;
    }
    maxVowels = currentVowels;

    for (int i = k; s[i] != '\0'; ++i) {
        if (isVowel(s[i]))
            currentVowels++;
        if (isVowel(s[i - k]))
            currentVowels--;
        maxVowels = fmax(maxVowels, currentVowels);
    }

    return maxVowels;
}