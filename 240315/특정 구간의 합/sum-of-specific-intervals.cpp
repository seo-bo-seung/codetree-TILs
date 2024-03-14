#include <iostream>
using namespace std;

int A[101];

int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    cin>>n>>m;
    int a1,a2;
    for(int i=0; i<n; i++){
        scanf("%d",&A[i]);
    }
    for(int i=0; i<m; i++){
        int sum=0;
        scanf("%d %d",&a1,&a2);
        for(int j=a1; j<=a2; j++){
            sum+=A[j-1];
        }
        cout<<sum<<endl;
    }
    return 0;
}