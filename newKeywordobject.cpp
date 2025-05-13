#include<iostream>
using namespace std;

class Employee{

    private:
    int x,y;
    public:
    void set(int a,int b);
    void show();


};
void Employee::set(int a,int b){

    x=a;
    y=b;

}
void Employee::show()
{
    cout<<x+y;

}
int main()
{
Employee *e=new Employee();
e->set(100,200);
e->show();
}