#include<iostream>
using namespace std;
class Acad{
    protected:
    int *arr;
    public:
    void setmarks(int sub[]){
        arr=sub;


    }
};
class sports{
    protected:
    int per;
    public:

    void setsmarks(int per)
    {
        this->per=per;

    }

};
class Result: public Acad,public sports{

    public:
    void showResult(){
        int agg=0;
        for(int i=0;i<6;i++){
            agg=agg+*arr;
            arr++;

        }
        int p=agg/6;
        int total=p+this->per;
        cout<<total;

    }
};
void main()
{
Result r;
int a[6]={60,60,60,60,60,60};
r.setmarks(a);
r.setsmarks(5);
r.showResult();


}
/*#include<iostream>
using namespace std;

class Acad {
protected:
    int* arr;
public:
    void setmarks(int sub[]) {
        arr = sub;
    }
};

class Sports {
protected:
    int per;

public:
    void setsmarks(int per) {
        this->per = per;
    }
};

class Result : public Acad, public Sports {
public:
    void showResult() {
        int agg = 0;
        for (int i = 0; i < 6; i++) {
            agg += arr[i];  // ✅ Avoid pointer arithmetic
        }
        int p = agg / 6;
        int total = p + per;
        cout << "Total result (Academic + Sports): " << total << "%" << endl;
    }
};

int main() {  // ✅ correct return type
    Result r;
    int a[6] = {60, 60, 60, 60, 60, 60};
    r.setmarks(a);
    r.setsmarks(5);
    r.showResult();
    return 0;
}
*/