#include <iostream>
using namespace std;
int main() {
    int a,b,temp;
    cout << "enterthe number: ";
    cin >> a;
    cout << "enterthe number: ";
    cin >> b;
    temp=a;
    a=b;
    b=temp;
    cout << "afterswapping a=" << a << ",b" << b <<endl;
return 0;
}