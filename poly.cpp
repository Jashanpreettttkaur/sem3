#include <iostream>
using namespace std;
int main(){
    int id;
    string name;
    double salary;
    int year;
    cout<<"enter empoyee id:";
    cin>>id;
    cout<<"enter employee nmae:";
    cin>>name;
    cout<<"Enter basic salary:";
    cin>>salary;
    cout<<"Enter Years of experience:";
    cin>>year;
    if(year<2){
        cout<<salary+salary*0.5;
    }
    else if(2<year<5){
        cout<<salary+salary*0.1;
    }
    else if(year>5){
        cout<<salary+salary*0.1;
    }
}
