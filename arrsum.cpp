#include <iostream>
using namespace std;
int main(){
    int r;
    int c;
    cin >> r;
    cin >> c;
    int sum=0;
    int arr[100][100]; 
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin >> arr[i][j];
        }
      
    }
     cout << "arry" << endl;
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
           sum=sum+arr[i][j];
        }
        
    
} cout << sum;
    return 0;
}