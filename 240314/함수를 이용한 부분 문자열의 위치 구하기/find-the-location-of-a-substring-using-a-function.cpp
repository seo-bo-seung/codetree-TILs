#include <iostream>
#include <string>
using namespace std;

void IsAns(string a, string b){
    bool flag=false;
    int idx;
    for(int i=0; i<a.size(); i++){
        if(a[i]==b[0]){
            for(int j=0; j<b.size(); j++){
                if(a[i+j]==b[j]) flag=true;
                else {
                    flag=false;
                    break;
                } 
            }
            if(flag) {
                idx=i;
                break;
            }
        }
    }
    if(flag) cout<<idx;
    else cout<<-1;
}
int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    cin>>a;
    string b;
    cin>>b;
    IsAns(a,b);

    return 0;
}