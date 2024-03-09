#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    std::cin>>a>>b;
    int arr[10]={0};
    while(a>1){
        int t=a%b;
        arr[t]++;
        a=a/b;
    }
    int sum=0;
    for(int i=0; i<10; i++){
        sum+=arr[i]*arr[i];
    }
    std::cout<<sum;
    return 0;
}