#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    std::cin>>a>>b;
    int arr[11];
    arr[0]=a;
    arr[1]=b;
    for(int i=2; i<10; i++){
        arr[i]=arr[i-1]+2*arr[i-2];
    }
    for(int i=0; i<10; i++){
        std::cout<<arr[i]<<" ";
    }
    return 0;
}