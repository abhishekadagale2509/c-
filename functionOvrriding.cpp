#include<iostream>
using namespace std;
class parent{
    private:
    int a;
    int b;
    public:
    void setdata(){
        cout<<"it is from base class"<<"\n";

}
};
class child:public parent{
public:
void setdata(){
    cout<<"it is from derived class"<<"\n";
    parent::setdata();
}
};
int main(){
    child c;
    c.setdata();


}
/* //parent::setdata();
it is from derived class
*/
/*
parent::setdata();
it is from derived class
it is from base class
*/