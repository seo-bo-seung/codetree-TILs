#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,k;
    cin>>n>>k;
    int arr[101]={0};
    int a,b;
    for(int i=1; i<=k; i++){
        cin>>a>>b;
        for(int j=a; j<=b; j++){
            arr[j]++;
        }
    }
    int max=1;
    for(int i=1; i<=k; i++){
        if(arr[i]>max) max=arr[i];
    }
    cout<<max;

    return 0;
}