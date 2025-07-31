// #include <iostream>
// using namespace std;
// void print(int x){
//     cout << x<< endl;
// }
// int print(int x,int y){
//     cout << x << endl;
// }
// int main(){
// print(5);
// print(3,14);
// return 0;
// }
#include <iostream>
using namespace std;
// void print(double x){
//     cout << x<< endl;
// }
// void print(float x){
//     cout << x << endl;
// }
// int main(){
// print(5.5678);
// print(3.14);
// return 0;
// }
void change(int *x){
    *x=10;
}
int main(){
    int num=5;
    change(&num);
    cout << num << endl;
    return 0;
}
