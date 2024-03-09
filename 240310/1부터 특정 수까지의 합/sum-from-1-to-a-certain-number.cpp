#include <iostream>
int ans(int n){
    int sum=0;
    for(int i=0; i<=n; i++){
        sum+=i;
    }
    return sum/10;
}

int main() {
    int n;
    std::cin>>n;
    std::cout<<ans(n);

    return 0;
}