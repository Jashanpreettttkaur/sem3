#include <iostream>
using namespace std;
 void getsum(int *arr,int size){
    int s=0;
    for(int i=0;i<5;i++){
        s=s+*(arr+i);
    }
    cout << "sum of arry=" << s << endl;
 }
int main(){
    int arr[5]={1,2,3,4,5};
    int *ptr= arr;
    int sum=0;
    for(int i=0;i<5;i++){
        cout << *(ptr+i) << " "   ;
        sum += *(ptr+i);

    }
    cout << "sum of arry using pointer" <<sum << endl;
    getsum(arr,5);

}