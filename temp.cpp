#include <iostream>
using namespace std;
int main()
{
    float temp;
    
    cin >> temp;
    char u;
    cin >> u;
    cout << "Original:" << temp << u <<endl;
    if(u=='c'){
        float f=(temp*(9.0/5.0))+32.0;
        float k=temp+273.15;
        cout << "Fahrenheit:" << f << "F" <<endl;
        cout << "Kelvin:" << k << "k"<< endl;
        
    }
    else if(u=='k'){
        float C=temp-273.15;
        float F= (C*(9.0/5.0))+32;
        cout << "Fahrenheit:" << F << "f" <<endl;
        cout << "celsius:" << C << "c" <<endl;
        
    }
    else if(u=='f'){
        float C1=(temp-32)*(5.0/9.0);
        float K= C1+273.15;
        cout << "kelvin:" << K << "k" << endl;
        cout << "celsius:" << C1 << "c" <<endl;
        
    }
}