#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    std::cin>>a;
    for(int i=1; i<=a; i++){
        int t=i/8;
        int k=i%7;
        if((i%2==0&&i%4!=0) || t%2==0 || k<4){
            continue;
        }
        else std::cout<<i<<" ";
    }
    return 0;
}