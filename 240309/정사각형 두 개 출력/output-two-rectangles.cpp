#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    std::cin>>a;
    for(int k=0; k<2; k++){
        for(int i=0; i<a; i++){
            for(int j=0; j<a; j++){
                std::cout<<"*";
            }
        std::cout<<std::endl;
    }
    std::cout<<std::endl;
    }
    
    return 0;
}