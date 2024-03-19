#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a,b;
    cin>>a;
    cin>>b;
    char t;
    for(int i=0; i<b.size(); i++){
        if(b[i]=='L'){
            t=a[0];
            for(int j=0; j<a.size()-1; j++){
                a[j]=a[j+1];
            }
            a[a.size()-1]=t;
        }
        else{
            t=a[a.size()-1];
            char k;
            for(int j=a.size()-1; j>=0; j--){
                char k=a[j-1];
                a[j]=k;
            }
            a[0]=t;
        }
    }
    cout<<a;
    return 0;
}