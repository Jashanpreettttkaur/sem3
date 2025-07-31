#include <iostream>
using namespace std;
void swap(int *a,int* b,int *c){
    int temp=*a;
    *a=*b;
    *b= *c;
    *c=temp;
    cout<<"-----aafter swap variablr and address-----" << endl;
    cout << "a:" << *a << "  address:" << &a << endl;
    cout << "b:"<< *b << "  address:" << &b << endl;
    cout << "c:" << *c<< "  address:" << &c << endl;

}
int* largest(int *a,int* b,int *c){
    if(*a > *b && *a > *c){
        cout << "largest n0:" << *a <<endl; 
        return a;
    }
    else if(*b > *a && *b > *c){
        cout << "largest n0:" << *b <<endl;
        return b;

    }
    else{
        cout << "largest n0:" << *c <<endl;
        return c;
    }
}
int main(){
    int a=10;
    int b=20;
    int c=30;
    int* ptr=&a;
    int* ptr1=&b;
    int* ptr2=&c;
    cout<<"-----actual variablr and address-----" << endl;
    cout << "a:" << a << "address:" << ptr << endl;
        cout << "b:" << b << "address:" << ptr1<< endl;
            cout << "c:" << c << "address:" << ptr2 << endl;
    swap(ptr ,ptr1,ptr2);
    int* large=largest(ptr ,ptr1,ptr2);
    *large=100;
    cout << largest(ptr,ptr1,ptr2) << endl;
    cout << "a:" << a << endl;
        cout << "b:" << b << endl;
            cout << "c:" << c << endl;
     


}
