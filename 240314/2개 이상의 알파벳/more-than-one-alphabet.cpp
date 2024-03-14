#include <iostream>
#include <string>
using namespace std;

void IsUnit(string A){
    int arr[24]={0};
    int ans=0;
    for(int i=0; i<A.size(); i++){
        arr[A[i]-97]++;
        if(arr[A[i]-97]==1) ans++;
    }
    if(ans>=2) cout<<"Yes";
    else cout<<"No";
}

int main() {
    // 여기에 코드를 작성해주세요.
    string A;
    cin>>A;
    IsUnit(A);
    return 0;
}