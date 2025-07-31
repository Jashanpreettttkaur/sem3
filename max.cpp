#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    int temp;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        temp=arr[0];
        if(temp <arr[i]){
            temp=arr[i];
        }
    }
    cout << "max:" << temp << endl;
    return 0;   
}