#include <iostream>
using namespace std;
int n;
int arr[11];

int Ans(int n){
    int sum=1;
    for(int i=0; i<n; i++){
        if(sum%arr[i]==0){
            sum= sum;
        }
        else{
            sum= sum*arr[i];
        }
    }
    return sum;
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<Ans(n);

    return 0;
}