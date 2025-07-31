#include <iostream>
#include <functional>
using namespace std;
// int main(){
//     int a=5;
//     int b=10;
//     auto func=[](int a,int b){
//         ++a;                       //function scope;
//         ++b;
//         cout << " inside a:" << a << "  b:" <<b << endl; 
//     };
//     func( a,b);
//     cout << " outside a:" << a << "  b:" <<b << endl;
//     return 0;
// }
// int main(){
//     int a;
//     int b;
//     auto add=[](int a,int b){
//         return a+b;
//     };
//     cout << add(2,3) <<endl;
// // }
// int main(){
//     int a=3;
//     int b=6;
//     int c=8;
//     auto avg=[=](){
//         return (a+b+c)/3;
//     };
//     cout << avg() << endl;
// }
// int main(){
//     int count=0;
//     auto inc=[&](){
//         count ++;
//     };
//     inc();
//     cout << count << endl;
// }

// void runtwice( function<void() >func){
//     func();
//     func();
// }
// int main(){
//     auto greet =[](){
//         cout << "hi!";};
//         runtwice(greet);
//         return 0;
    
// }
// int main(){
//     int a=6;
//     auto fun=[](int x){
//         return x*x;
//     };
//     cout <<"square"  << fun(a) << endl;
//     return 0;

// }
