#include <stdio.h>

int is_vowel(char ch) {
    
    ch = (ch >= 'A' && ch <= 'Z') ? ch + 'a' - 'A' : ch;
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (is_vowel(ch)) {
        printf("%c is a vowel.\n", ch);
    } else {
        printf("%c is not a vowel.\n", ch);
    }

    return 0;
}
