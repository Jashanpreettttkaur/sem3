#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "enterthe number: ";
    cin >> number;
    if(number%2==0){
        cout << number << "even" << endl;
    }
    else{
        cout << number << "odd" << endl;
    }
return 0;
}