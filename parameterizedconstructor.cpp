#include<iostream>
using namespace std;
class add{
    private:
    int a,b;
    public:
    add(int x,int y){
        a=x;
        b=y;

    }
    void show(){
        cout<<a+b;

    }
};

int main()
{
    int a,b;
    cout<<"enter a & b val";
    cin>>a>>b;


    add ad(a,b);
    ad.show();


}