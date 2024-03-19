#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d",&n);
    int arr[11][11];
    int tmp=1;
    for(int i=0; i<n; i++){
        if(i%2==0){
            for(int j=0; j<n; j++){
            arr[n-j-1][n-i-1]=tmp;
            tmp++;
        }
        }
        else{
            for(int j=0; j<n; j++){
                arr[j][n-i-1]=tmp;
                tmp++;
            }
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