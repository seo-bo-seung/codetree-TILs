#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    int flag=1;
    for(int i=0; i<5; i++){
        std::cin>>a;
        if(a%3!=0) flag=0;
    }
    std::cout<<flag;
}