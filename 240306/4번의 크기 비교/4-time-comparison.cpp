#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a,t;
    cin>>a;

    for(int i=0; i<4; i++){
        cin>>t;
        if(a>t) cout<<1<<endl;
        else cout<<0<<endl;
    }
    
    return 0;
}