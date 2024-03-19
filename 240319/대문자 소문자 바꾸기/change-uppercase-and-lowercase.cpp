#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    cin>>a;
    for(int i=0; i<a.size(); i++){
        if(a[i]<90) a[i]=a[i]+32;
        else a[i]=a[i]-32;
    }
    cout<<a;
    return 0;
}