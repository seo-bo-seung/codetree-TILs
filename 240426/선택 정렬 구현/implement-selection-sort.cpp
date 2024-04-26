#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    int arr[101];
    int i,j,idx;
    for(int k=0; k<n; k++){
        cin>>arr[k];
    }
    for(i=0; i<n; i++){
        int min=101;
        for(j=i; j<n; j++){
            if(arr[j]<min){
                min=arr[j];
                idx=j;
            }
        }
        int tmp=arr[i];
        arr[i]=arr[idx];
        arr[idx]=tmp;
    }
    for(i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}