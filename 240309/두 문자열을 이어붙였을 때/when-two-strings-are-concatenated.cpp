#include <iostream>
#include <string>

using namespace std;
int main() {
    string a,b;
    cin>>a>>b;
    string c,d;
    c=a+b;
    d=b+a;
    if(c==d){
        cout<<"true";
        
    }
    else cout<<"false";
    return 0;
}