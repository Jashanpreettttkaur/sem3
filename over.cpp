#include <iostream>
using namespace std;
int cal(int a,int b){
    int s=a+b;
      return s;
}
float cal(int a,int b ,int c){
   int x=a*b*c;
   return x;
}
int main(){
    int a=23;
    int b=35;
    int s= cal(a,b);
    cout << "sum=" << s <<endl;
    float p = 23.6;
    float q = 26.7;
    float n= 55.9;
    int x=cal( p,q,n);
    cout << "sum=" << x <<endl;


}