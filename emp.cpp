#include <iostream>
using namespace std;
int main()
{
    int eId;
    cin >> eId;
    string name;
    cin >> name;
    int salary;
    cin >> salary;
    int year;
    cin >> year;
    cout << "ID:" << eId << endl;
    cout << "Name" << name <<endl;
    cout << "Basic salary" << salary << endl;
    if(year<2){
        int x=salary*0.05;
        cout << "Bonus :5%" << endl;
        cout << "Bonus amount:" << x << endl;
        cout << "Total:" << salary+x <<endl;
    }
    if(year>=2 && year<=5){
        int x=salary*0.1;
        cout << "Bonus :10%" << endl;
        cout << "Bonus amount:" << x << endl;
        cout << "Total:" << salary+x <<endl;
    }
    if(year>5){
        int x=salary*0.15;
        cout << "Bonus :15%" << endl;
        cout << "Bonus amount:" << x << endl;
        cout << "Total:" << salary+x <<endl;
    }
    return 0;
}