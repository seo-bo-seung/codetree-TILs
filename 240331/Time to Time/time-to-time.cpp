#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int elapsed_time=0;
    while(true){
        if(a==c && b==d) break;
        elapsed_time++;
        b++;
        if(b==60){
            a++;
            b=0;
        }
    }
    cout<<elapsed_time;

    return 0;
}