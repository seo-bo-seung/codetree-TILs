#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    int arr[201]={0};
    int x1,x2;
    for(int i=0; i<n; i++){
        cin>>x1>>x2;
        for(int j=x1+100; j<x2+100; j++){
            arr[j]++;
        }
    }
    int max=0;
    for(int i=0; i<200; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<max;

    
    return 0;
}