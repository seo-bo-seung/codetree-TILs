#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int arr[4][4];
    for(int i=0; i<4;i++){
        for(int j=0; j<4; j++){
            cin>>arr[i][j];
        }
    }
    int sum=0;
    sum+=arr[0][0]+arr[1][0]+arr[1][1]+arr[2][0]+arr[2][1]+arr[2][2]+arr[3][0]+arr[3][1]+arr[3][2]+arr[3][3];
    cout<<sum;
    return 0;
}