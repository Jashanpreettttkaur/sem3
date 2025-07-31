#include <iostream>
using namespace std;
int main(){
    // int r;
    // int c;
    int r1;
    int c1;
    cin >> r1;
    cin >> c1;
    // cin >> r;
    // cin >> c;
    int s1=0;
    int sum[100][100];
    int ar[100][100];
    // int arr[100][100]; 
    // for(int i=0;i<r;i++){
    //     for(int j=0;j<c;j++){
    //         cin >> arr[i][j];
    //     }  
    // }2
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin >> ar[i][j];
        }
    }
     for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
           if(i==j){
            s1=s1+ar[i][j];
           }
        }
    }
    // for(int i=0;i<r1;i++){
    //     for(int j=0;j<c1;j++){
    //         cout << sum[i][j] << " ";
    //     }
        cout << s1 << endl;
        
    return 0;
}
