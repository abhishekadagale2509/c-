#inlcude<iostream>
using namespace std;
class Add{
    private:
    int id;
    char name[90];
    public:
    void setdata(){
        cout<<"enter id";
        cin>>id;
        cout<<"enter name";
        cin>>name;


    }
    void showdata()
    {
        cout<<id<<name;

    }
};
void main()
{Add *ad;
    ad->setdata();
    ad->showdata();

}
/*#include <iostream>
using namespace std;

class Add {
private:
    int id;
    char name[90];

public:
    void setdata() {
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter name: ";
        cin >> name;
    }

    void showdata() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};

int main() {
    int size;
    cout << "Enter number of records: ";
    cin >> size;

    Add* ad = new Add[size];  // ✅ Allocate memory for array of Add objects

    // Input data
    for (int i = 0; i < size; i++) {
        cout << "\nRecord " << i + 1 << ":\n";
        ad[i].setdata();      // ✅ Use array notation
    }

    // Output data
    cout << "\nDisplaying records:\n";
    for (int i = 0; i < size; i++) {
        ad[i].showdata();
    }

    delete[] ad;  // ✅ Free allocated memory
    return 0;
}
*/