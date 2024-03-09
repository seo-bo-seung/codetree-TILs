#include <iostream>
#include <algorithm>

using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    cin>>n>>m;
    int t=max(n,m);
    while(1){
        if(t%n==0 && t%m==0){
            cout<<t;
            break;
        }
        t++;
    }
    return 0;
}