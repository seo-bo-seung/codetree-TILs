#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.
    int b,a;
    std::cin>>b>>a;
    for(int i=b; i>=a; i-- ){
        if(i%2==0) std::cout<<i<<" ";
    }
    return 0;
}