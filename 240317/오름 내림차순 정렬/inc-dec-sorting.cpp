#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    int arr[101];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    sort(arr,arr+n,greater<int>());
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}