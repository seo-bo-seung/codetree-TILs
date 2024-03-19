#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    int a,b;
    cin>>n>>m;
    int arr[11][11]={0};
    for(int i=1; i<=n; i++){
        cin>>a>>b;
        arr[a][b]=a*b;
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}