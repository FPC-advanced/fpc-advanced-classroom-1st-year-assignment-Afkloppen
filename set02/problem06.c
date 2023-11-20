#include <stdio.h>
#include <string.h>

void input_string(char *a) {
    printf("Enter a string: ");
    gets(a);
}

void str_reverse(char *str, char *rev_str) {
    int length = strlen(str);
    int i, j;

    
    strcpy(rev_str, str);

    
    for (i = 0, j = length - 1; i < j; i++, j--) {
        char temp = rev_str[i];
        rev_str[i] = rev_str[j];
        rev_str[j] = temp;
    }
}

void output(char *a, char *reverse_a) {
    printf("Original string: %s\n", a);
    printf("Reversed string: %s\n", reverse_a);
}

int main() {
    char str[100];
    char reversed_str[100];

    input_string(str);
    str_reverse(str, reversed_str);
    output(str, reversed_str);

    return 0;
}

