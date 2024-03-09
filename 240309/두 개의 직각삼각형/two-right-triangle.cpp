#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    std::cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            std::cout<<"*";
        }
        for(int j=0; j<i*2; j++){
            std::cout<<" ";
        }
        for(int j=0; j<n-i; j++){
            std::cout<<"*";
        }
        std::cout<<std::endl;
    }
    return 0;
}