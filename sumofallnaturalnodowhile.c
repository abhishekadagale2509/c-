#include<stdio.h>
void main(){
    int i,sum=0,no;
    printf("enter all natural no and sum it using while loop");
    scanf("%d",&no);
    i=1;
    while(i<=no){
        sum=sum+i;
        i++;
        
    }printf("sum is %d",sum);
}