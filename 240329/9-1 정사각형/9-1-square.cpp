#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    int arr[10][10];
    int tmp=9;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            arr[i][j]=tmp;
            if(tmp==1) tmp=9;
            else tmp--;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }

    return 0;
}