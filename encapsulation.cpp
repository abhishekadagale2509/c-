#include<iostream>
#include<string.h>
using namespace std;
class employee
{

    private:
    int id;
    char name[90],contact[90];
    float sal;
    public:
    void setdata(){
        cout<<"entere data";
        cin>>id>>name>>contact>>sal;
     

    }
    void showdata(char type[]){
        if(strcmp(type,"security")==0){
            cout<<name<<id;

        }
        else if(strcmp(type,"manager")==0){
            cout<<id<<name<<sal<<contact;

        }
        else{
            cout<<"no data found";
        }
           
    }
};
void main()
{
    employee e;
    int choice;
    e.setdata();
    cout<<"entere choice";
    cin>>choice;
    switch(choice){
        case 1:
        e.showdata("security");
        break;
        case 2:
        e.showdata("manager");
        break;
        default:
        e.showdata("other");
    }
}
/*#include <iostream>
#include <cstring>
using namespace std;

class employee {
private:
    int id;
    char name[90], contact[90];
    float sal;

public:
    void setdata() {
        cout << "Enter ID: ";
        cin >> id;
        cin.ignore();  // flush newline left in buffer

        cout << "Enter Name: ";
        cin.getline(name, 90);

        cout << "Enter Contact: ";
        cin.getline(contact, 90);

        cout << "Enter Salary: ";
        cin >> sal;
    }

    void showdata(char type[]) {
        if (strcmp(type, "security") == 0) {
            cout << "Security Details:\n";
            cout << "Name: " << name << "\nID: " << id << endl;
        } else if (strcmp(type, "manager") == 0) {
            cout << "Manager Details:\n";
            cout << "ID: " << id << "\nName: " << name << "\nSalary: " << sal << "\nContact: " << contact << endl;
        } else {
            cout << "No data found.\n";
        }
    }
};

int main() {
    employee e;
    e.setdata();  // must call before showdata

    int choice;
    cout << "\nEnter choice (1 - Security, 2 - Manager): ";
    cin >> choice;

    switch (choice) {
        case 1:
            e.showdata((char*)"security");
            break;
        case 2:
            e.showdata((char*)"manager");
            break;
        default:
            e.showdata((char*)"other");
    }

    return 0;
}
*/