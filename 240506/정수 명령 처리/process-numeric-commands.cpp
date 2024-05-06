#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    stack<int> s;
    string a;
    int b;
    for(int i=0; i<n; i++){
        cin>>a;
        if(a=="push"){
            cin>>b;
            s.push(b);
        }
        else if(a=="size"){
            cout<<s.size()<<endl;
        }
        else if(a=="empty"){
            cout<<s.empty()<<endl;;
        }
        else if(a=="pop"){
            cout<<s.top()<<endl;
            s.pop();
        }
        else{
            cout<<s.top()<<endl;
        }
    }
    return 0;
}