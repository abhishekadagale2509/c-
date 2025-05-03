#include<stdio.h>
void main(){
    int i=0,no,fib,f1=0,f2=1;
    printf("entere no");
    scanf("%d",&no);
    while(i<=no){
        fib=f1+f2;
        f1=f2;
        f2=fib;
        printf("%d",fib);
    
        i++;
        
    }
    return 0;
}
/*#include<stdio.h>
void main(){
    int f1=0,f2=1,fib,no;
    
    int i=0;
    printf("enter no");
    scanf("%d",&no);
    printf("%d %d",f1,f2);
    while(i<no){
        fib=f1+f2;
        f1=f2;
        f2=fib;
       
        
           printf("%d",fib);
           i++;
           
    }
   


    
}*/