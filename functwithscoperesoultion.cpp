#include<iostream>
using namespace std;
class add{
    public:
    int a,b,c;
    void setdata(int x,int y);
    void showdata();

};
void add::setdata(int x,int y)

{
    a=x;
    b=y;

}
void add::showdata(){
     c=a+b;
    cout<<c;

}

int main(){
add d;
d.setdata(100,200);
d.showdata();
}