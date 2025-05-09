#include<iostream>
using namespace std;
class add{
    public:
    int a,b;
    void setdata(int x,int y);
    void showdata();
};
void add::setdata(int x,int y){
    a=x;
    b=y;

}
void add::showdata(){
    cout<<a+b;

}
int main(){
add d;
d.setdata(10,20);
d.showdata();

}