#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.
    int a=5, b=6, c=7;
    int tmp;
    tmp=b;
    b=a;
    int tmp2=c;
    c=tmp;
    a=tmp2;
    printf("%d\n%d\n%d",a,b,c);
    return 0;
}