#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    std::cin>>n;
    int ans;
    int i=1;
    while(n>1){
        n=n/i;
        i++;
    }
    std::cout<<i-1;
    return 0;
}