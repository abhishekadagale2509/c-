#include<stdio.h>
#include<string.h>
void main()
{
    char ch[90];
    printf("enter string");
    gets(ch);
    printf("before reverse string is %s",ch);
    int start=0;
    int last=strlen(ch);
    int end=(last-1);
    for(start=0;start<end;start++){
        char temp=ch[start];
        ch[start]=ch[end];
        ch[end]=temp;

    }
    printf("after reverse the string is %s",ch);

}
/*#include <stdio.h>
#include <string.h>

void main() {
    char ch[90];
    printf("Enter string: ");
    fgets(ch, sizeof(ch), stdin);

    // Remove newline character added by fgets
    ch[strcspn(ch, "\n")] = '\0';

    printf("Before reverse, string is: %s\n", ch);

    int start = 0;
    int end = strlen(ch) - 1;

    while (start < end) {
        char temp = ch[start];
        ch[start] = ch[end];
        ch[end] = temp;
        start++;
        end--;
    }

    printf("After reverse, the string is: %s\n", ch);
}
*/
