#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    std::cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<2*i+1; j++){
            std::cout<<"*";
        }
        std::cout<<std::endl;
    }
    return 0;
}