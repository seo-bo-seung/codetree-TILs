#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    cin>>a;
    char t,k;
    t=a[1];
    k=a[0];
    for(int i=0; i<a.size(); i++){
        if(a[i]==t){
            a[i]=k;
        }
    }
    cout<<a;
    return 0;
}