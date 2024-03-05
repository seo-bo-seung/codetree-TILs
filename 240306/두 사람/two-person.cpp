#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    char b;
    int c;
    char d;
    cin>>a>>b;
    cin>>c>>d;
    if((a>=19 && b=='M') || (c>=19 && d=='M')) cout<<1;
    else cout<<0;
    return 0;
}