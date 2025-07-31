#include <iostream>
using namespace std;
int main() {
   int n;
   cin >> n;
   int arr[n];
  int  min=-22333;
   for(int i=0;i<n;i++){
    cin >> arr[i];
    if(min > arr[i]){
        min =arr[i];

    }
   }
   cout << "min:" << min << endl;
   return 0;
}