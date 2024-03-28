#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    int tmp=0;
    int arr[101][101];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i%2==0) tmp++;
            else tmp+=2;
            arr[i][j]=tmp;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}