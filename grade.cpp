#include <iostream>
using namespace std;
int main() {
    int grade;
    cout << "enterthe number: "; 
    cin >> grade;
    if(grade>=90){
        cout << grade << endl;
        cout << "A" << endl;
    }
    else if(grade<=90 && grade>=80){
        cout << grade << "B" << endl;
    }
    else if(grade<=80 && grade>=70){
        cout <<grade << "C" << endl;
    }
    else if(grade<70){
    cout << grade << "fail" << endl;
}
return 0;
}