#include<iostream>
using namespace std;
class square{
private:
int x;
public:
square(int x){
    cout<<x*x<<"\n";

}
square(float x)
{
    cout<<x*x<<"\n";
}
};
int main()
{
    square s1(5);
    square s2(5.5f);
    

}