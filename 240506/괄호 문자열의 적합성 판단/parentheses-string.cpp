#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    cin>>a;
    stack<char> s;
    for(int i=0; i<a.size(); i++){
        if(s.empty()==true || a[i]=='('){
            s.push(a[i]);
        }
        else if(a[i]!='('){
            s.pop();
        }
    }
    if(s.empty()){
        cout<<"Yes";
    }
    else cout<<"No";
    return 0;
}