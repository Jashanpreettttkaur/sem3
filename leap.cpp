#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "enterthe number: ";
    cin >> number;
    if(number%4==0 && number%100!= 0 || number%400==0){
        cout << number << "leap year" << endl;
    }
    else{
        cout << number << "not leap year" << endl;
    }
return 0;
}