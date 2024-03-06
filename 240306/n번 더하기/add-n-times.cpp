#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,n;
    std::cin>>a>>n;
    for(int i=0; i<n; i++){
        a+=n;
        std::cout<<a<<endl;
    }
    return 0;
}