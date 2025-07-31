#include <iostream>
// using namespace std;
int main(){
    // int arr[5]={2,4,5,6,7};
    // int *p=arr;
    // for(int i=0;i<5;i++){
    //     cout << *(p+i) << " ";
    // }
    // int a=2;
    // int *p=&a;
    // int * ptr =&a;
    // cout << *p << endl;
    //  cout << *ptr << endl;
    // 
   std:: unique_ptr<int> p1(new int(42));
   std::cout << "Number: " << *p1 << std::endl;

return 0;
return 0;
}