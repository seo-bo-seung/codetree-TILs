#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    std::cin>>n;
    int arr[101];
    for(int i=0; i<n; i++){
        std::cin>>arr[i];
    }
    int num=0;
    for(int i=0; i<n; i++){
        if(arr[i]==2) num++;
        if(num==3) {
            std::cout<<i+1;
            break;
        }
    }
    return 0;
}