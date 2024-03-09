#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    std::cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            std::cout<<"*";
        }
        std::cout<<std::endl;
        std::cout<<std::endl;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n-1-i; j++){
            std::cout<<"*";
        }
        std::cout<<std::endl;
        std::cout<<std::endl;
    }

    return 0;
}