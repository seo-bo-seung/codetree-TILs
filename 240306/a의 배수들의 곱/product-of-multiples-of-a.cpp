#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.
    int sum=1;
    int a,b;
    std::cin>>a>>b;
    for(int i=1; i<=b; i++){
        if(i%a==0) sum*=i;
    }
    std::cout<<sum;
    return 0;
}