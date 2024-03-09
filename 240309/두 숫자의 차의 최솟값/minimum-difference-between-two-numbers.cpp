#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    std::cin>>n;
    int arr[11];
    for(int i=0; i<n; i++){
        std::cin>>arr[i];
    }
    int small=100;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[j]-arr[i]<small) small=arr[j]-arr[i];
        }
    }
    std::cout<<small;
    return 0;
}