#include <iostream>

void Print(int n){
    if(n==0) return;
    Print(n-1);
    printf("%s\n","HelloWorld");
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d",&n);
    Print(n);
    return 0;
}