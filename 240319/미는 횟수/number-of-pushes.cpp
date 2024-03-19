#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string a,b;
    cin>>a>>b;
    int n=-1;
    for(int i=0; i<a.size();i++){
        if(a==b) break;
        else{
            a=a.substr(1)+a.substr(0,1);
            n++;
        }
    }
    if(n==-1) cout<<n;
    else cout<<n+1;
    return 0;
}