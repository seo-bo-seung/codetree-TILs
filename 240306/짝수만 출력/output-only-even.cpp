#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    std::cin>>a>>b;
    for(int i=a; i<=b; i++){
        if(i%2==0) std::cout<<i<<" ";
    }
    return 0;
}