#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string a,b,c;
    int small=100;
    for(int i=0; i<3; i++){
        cin>>a;
        if(a.size()<small) small=a.size();
    }
    cout<<small;
}