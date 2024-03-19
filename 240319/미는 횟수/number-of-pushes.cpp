#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string a,b;
    cin>>a>>b;
    int n=0;
    for(int i=0; i<a.size();i++){
        if(a==b) break;
        else{
            a=a.substr(a.size()-1,1)+a.substr(0,a.size()-1);
            n++;
        }
    }
    if(n>=a.size()) cout<<-1;
    else cout<<n;
    return 0;
}