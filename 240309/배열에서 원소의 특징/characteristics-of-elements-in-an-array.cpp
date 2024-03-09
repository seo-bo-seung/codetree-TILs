#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[11];
    for(int i=0; i<10; i++){
        std::cin>>arr[i];
    }
    int index;
    for(int i=0; i<10; i++){
        if(arr[i]%3==0){
            index=i;
            break;
        }
        
    }
    std::cout<<arr[index-1];
    return 0;
}