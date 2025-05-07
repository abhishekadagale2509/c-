#include <stdio.h>
#include <string.h>

void main() {
    char f[20];
    char s[20];
    int f1, s1;

    printf("Enter first string: ");
    fgets(f, sizeof(f), stdin);
    f[strcspn(f, "\n")] = '\0'; // remove newline

    printf("Enter second string: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0'; // remove newline

    f1 = strlen(f);
    s1 = strlen(s);

    if (f1 == s1) {
        int flag = 1; // assume strings are equal
        int count = 0;

        while (f[count] != '\0') {
            if (f[count] != s[count]) {
                flag = 0; // characters differ
                break;
            }
            count++;
        }

        if (flag) {
            printf("Strings are equal.\n");
        } else {
            printf("Strings are not equal.\n");
        }
    } else {
        printf("Strings are not equal (length mismatch).\n");
    }
}
