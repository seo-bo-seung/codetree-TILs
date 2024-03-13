#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void IsPalindrome(string &a){
    string tmp;
    for(int i=0; i<a.size(); i++){
        tmp=tmp+a[a.size()-i-1];
    }
    if(tmp==a) cout<<"Yes";
    else cout<<"No";
}

int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    cin>>a;
    IsPalindrome(a);
    return 0;
}