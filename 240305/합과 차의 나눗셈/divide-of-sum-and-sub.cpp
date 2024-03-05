#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    cin>>a>>b;
    float ans=(float)(a+b)/(a-b);
    printf("%.2f",ans);
    return 0;
}