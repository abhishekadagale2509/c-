#include<iostream>
using namespace std;
class A{
    public:
    A(int x){
        cout<<"i am from parent"<<x;
    }
};
class B:public A{
public:
    B(int no):A(no){
        cout<<"i am from child class";
        }
};
int main()
{
B b(10);


}
/*i am from parent10i am from child class*/