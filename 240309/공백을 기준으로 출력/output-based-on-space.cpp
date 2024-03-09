#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string a,b;
    getline(cin,a);
    getline(cin,b);
    a=a+b;
    for(int i=0; i<a.size(); i++){
        if(a[i]==' '){
            a.erase(i,1);
        }
    }
   
    cout<<a;
    return 0;
}