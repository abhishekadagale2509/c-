#include<stdio.h>
void main()
{
   int a[5];
   printf("entere val");
   for(int i=0;i<5;i++){
       scanf("%d",&a[i]);
   }
   
    printf("display   val before swap");
   for(int i=0;i<5;i++){
       printf("%d\t",a[i]);
   }
   
    
   for(int i=0;i<5;i++){
       for(int j=(i+1);j<5;j++){
           if(a[i]>a[j]){
               int temp=a[i];
               a[i]=a[j];
               a[j]=temp;
               
           }
       }
   }
    printf("after swap");
   for(int i=0;i<5;i++){
       printf("%d\t",a[i]);
   }
   
   
    return 0;

}
/*#include<stdio.h>
void main()
{
   int a[5];
   printf("entere val");
   for(int i=0;i<5;i++){
       scanf("%d",&a[i]);
   }
   
    printf("display   val before swap");
   for(int i=0;i<5;i++){
       printf("%d\t",a[i]);
   }
   
    
   for(int i=0;i<5;i++){
       for(int j=(i+1);j<5;j++){
           if(a[i]>a[j]){
               int temp=a[i];
               a[i]=a[j];
               a[j]=temp;
               
           }
       }
   }
    printf("after swap");
   for(int i=0;i<5;i++){
       printf("%d\t",a[i]);
   }
   
   
    

}*/