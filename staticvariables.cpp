#include<iostream>
using namespace std;
class Add{
    public:
    int a;
    static int b;
    void showdata();
};
int Add::b=0;


int main()
{
    Add ad,ad2;
    cout<<"with first obj\n";
    ad.a=20;
    ad.b=10;
    cout<<"a is "<<ad.a<<"\n";
    cout<<"b is "<<ad.b<<"\n";
    cout<<"with second obj"<<"\n";
    cout<<"a is "<<ad2.a<<"\n";
    cout<<"b is "<<ad2.b<<"\n";


}