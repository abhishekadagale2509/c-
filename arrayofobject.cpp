#include<iostream>
using namespace std;

class student{
public:
int id;
char name[90];
void setdata(){
cout<<"entere name";
cin>>name;
cout<<"entere id\n";
cin>>id;
}
void showdata(){
    cout<<id<<name<<"\n";

}
};
int main(){
student s[5];
for(int i=0;i<5;i++){
    s[i].setdata();


}
cout<<"show data";
for(int i=0;i<5;i++){
s[i].showdata();

}
}