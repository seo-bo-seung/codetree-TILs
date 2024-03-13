#include <iostream>
using namespace std;

void IsPlus(int arr[], int n){
    for(int i=0; i<n; i++){
        if(arr[i]<0){
            arr[i]=-1*arr[i];
        }
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int arr[50];
    cin>>n;
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    IsPlus(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}