#include<iostream>
using namespace std;
class fibo{
    private:
    int f1,f2,fibb;
    public :
    fibo(){

        f1=0;
        f2=1;

    }
    void show();
};
void fibo::show(){
    for(int i=1;i<=5;i++){
    fibb=f1+f2;
    f1=f2;
    f2=fibb;
    cout<<fibb<<"\n";
    }
    
}
int main(){
fibo b;
b.show();
}
/*1
2
3
5
8*/