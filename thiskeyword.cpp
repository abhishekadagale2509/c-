#include<iostream>
using namespace std;
class Add{
    int x,y;
    public:
    void setdata(int x,int y);
    void showdata();

};
void Add::setdata(int x,int y){
    this->x=x;
    this->y=y;

}
void Add::showdata()
{
    cout<<x+y;

}
int main()
{
    Add ad;
    ad.setdata(200,100);
    ad.showdata();


}
