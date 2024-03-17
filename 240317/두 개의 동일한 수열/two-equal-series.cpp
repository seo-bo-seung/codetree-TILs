#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int arr1[101];
    int arr2[101];
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr1[i];
    }
    for(int j=0; j<n; j++){
        cin>>arr2[j];
    }
    sort(arr1,arr1+n);
    sort(arr2,arr2+n);
    int flag=0;
    for(int i=0; i<n; i++){
        if(arr1[i]==arr2[i]){
            flag=1;
        }
        else flag=0;
    }
    if(flag==1){
        cout<<"Yes";
    }
    else cout<<"No";

    return 0;
}