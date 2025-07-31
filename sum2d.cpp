#include <iostream>
using namespace std;
int main(){
    int r;
    int c;
    int r1;
    int c1;
    cin >> r1;
    cin >> c1;
    cin >> r;
    cin >> c;
    int sum[100][100];
    int ar[100][100];
    int arr[100][100]; 
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin >> arr[i][j];
        }  
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin >> ar[i][j];
        }
    }
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
           sum[i][j]=arr[i][j]+ar[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout << sum[i][j] << " ";
        }
        cout << endl;
        }
    return 0;
}