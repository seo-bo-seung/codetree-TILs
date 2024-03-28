#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    int arr[10][10];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            arr[i][j]=(j+1)*(i+1);
        }
    }
    for(int i=0; i<n; i++){
        for(int j=n; j>0; j--){
            cout<<arr[i][j-1]<<" ";
        }
        cout<<endl;
    }
    return 0;
}