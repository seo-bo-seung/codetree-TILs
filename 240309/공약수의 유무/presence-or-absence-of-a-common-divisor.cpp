#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    std::cin>>a>>b;
    int flag=0;
    for(int i=a; i<=b; i++){
        if(1920%i==0 && 2880%i==0){
            flag=1;
        }
    }
    std::cout<<flag;
    return 0;
}