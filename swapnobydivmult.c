#include<stdio.h>
void main(){
    int a,b,c;
    printf("swap two no");
    scanf("%d %d",&a,&b);
    a=a*b;
    b=a/b;
    a=a/b;
    printf("%d %d",a,b);
}