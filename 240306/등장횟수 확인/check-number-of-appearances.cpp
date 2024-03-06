#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a=0;
    for(int i=0; i<5; i++){
        int t;
        cin>>t;
        if(t%2==0) a++;
    }
    cout<<a;
    return 0;
}