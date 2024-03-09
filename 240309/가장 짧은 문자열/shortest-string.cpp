#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    int small=20;
    int max=0;
    for(int i=0; i<3; i++){
        cin>>a;
        if(a.size()<small) small=a.size();
        if(a.size()>max) max=a.size();
    }
    cout<<max-small;
}