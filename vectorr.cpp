/*#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v2){
for(int i=0;i<v2.size();i++){
cout<<v2[i]<<"";
}cout<<endl;


}
int main()
{
    vector<int>v1;
    int no,size;
    cout<<"eneter the vecto size";
    cin>>size;

    for(int i=0;i<size;i++){
        cout<<"enetere element to add";
        cin>>no;
        v1.push_back(no);

    }
    display(v1);

       return 0;

}*/
#include <iostream>
#include<vector>
using namespace std;
void display(vector<int>&v2){
    for(int i=0;i<v2.size();i++){
    cout<<v2[i]<<""<<endl;

    }


}

int main()
{
    vector<int>v1;
    int ele,size;
    cout<<"eneter size"<<endl;
    cin>>size;
    for(int i=0;i<size;i++){
        cout<<"elements to add"<<endl;
        cin>>ele;
        v1.push_back(ele);
           }
           display(v1);
           vector<int>::iterator iter=v1.begin();
           v1.insert(iter,40);
           display(v1);


    return 0;

}/*#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){ 
   // vector<int> vec1;
       vector<int> vec1;      //zero length integer vector
    vector<char> vec2(4);  //4-element character vector
    vector<char> vec3(vec2);//4-element character vector from vec2
    vector<int> vec4(6,3); //6-element vector of 3s
    int element, size;
    cout<<"Enter the size of your vector"<<endl;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter an element to add to this vector: ";
        cin>>element;
        vec1.push_back(element);
    }    display(vec1);
    vec1.pop_back();
      //vector<int> :: iterator iter = vec1.begin();
display(vec1);
    vector<int> :: iterator iter = vec1.begin();
    vec1.insert(iter,566);
    display(vec1);
    display(vec1);
    //display(vec1);    
    return 0;
}
*/
