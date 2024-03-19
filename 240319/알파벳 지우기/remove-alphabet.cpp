#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a,b;
    cin>>a>>b;
    for(int i=0; i<a.size();i++){
        if(a[i]>=97){
            a.erase(i,1);
        }
    }
    for(int i=0; i<b.size();i++){
        if(b[i]>=97){
            b.erase(i,1);
        }
    }
    int c,d;
    c=stoi(a);
    d=stoi(b);
    cout<<c+d;
    return 0;
}