#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    std::cin>>a>>b;
    for(int i=a; i<=b; i-=2){
        std::cout<<i<<" ";
    }
    return 0;
}