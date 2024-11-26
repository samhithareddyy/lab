#include <stdio.h>
#include <string.h>

int get_string_length(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char str[100];

    printf("Enter a line of text: ");
    fgets(str, sizeof(str), stdin);

    
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    int length = get_string_length(str);
    printf("The length of the string is: %d\n", length);

    return 0;
}
