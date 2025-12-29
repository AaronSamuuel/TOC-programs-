#include <stdio.h>
#include <string.h>

int main() {
    char s[50];
    printf("Enter string: ");
    scanf("%s", s);

    if (s[0] == 'a' && s[strlen(s) - 1] == 'a')
        printf("Accepted\n");
    else
        printf("Rejected\n");

    return 0;
}

