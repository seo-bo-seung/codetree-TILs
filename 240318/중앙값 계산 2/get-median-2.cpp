#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    int arr[101];
    int tmp[101];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        tmp[i]=arr[i];
        if(i%2==0){
            sort(tmp,tmp+i+1);
            cout<<tmp[i/2]<<" ";
        }
    }
    return 0;
}