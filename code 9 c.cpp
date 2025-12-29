#include <stdio.h>
#include <string.h>

int main() {
    char s[50];
    printf("Enter string: ");
    scanf("%s", s);

    if (s[0] == '0' && s[strlen(s) - 1] == '1')
        printf("Accepted\n");
    else
        printf("Rejected\n");

    return 0;
}

