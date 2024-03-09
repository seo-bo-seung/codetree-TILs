#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string a,b;
    cin>>a>>b;
    int n=0;
    for(int i=0; i<a.size(); i++){
        if(a.substr(i,2)==b) n++;
    }
    cout<<n;
    return 0;
}