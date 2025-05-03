#include<stdio.h>
int fib_recursive(int n)
{
    if(n==1 || n==2)
    {
     return n-1;
    }
    else
    {
        return fib_recursive(n-1) + fib_recursive(n-2);
    }


}

int fib_iterative(int n)
{

int a=0;
int b=1;
for(int i=0;i<n-1;i++)
{
    b=a+b;
    a=b-a;

}
return a;

}
int main()

{ 
    int num;

    printf("entere no for fibonanci\n");
    scanf("%d",&num);
    printf(" value of fibonanci position value is %d  using recursive approach %d\n",num,fib_recursive(num));
    printf(" value of fibonanci position value is %d  using iterative approach %d\n",num,fib_iterative(num));
    return 0;
}