#include <iostream>
#include <string>

using namespace std;
bool ans2(int i){
    bool t;
    string a=to_string(i);
    if(a.find('3')==string::npos && a.find('6')==string::npos && a.find('9')==string::npos){
        t=false;
    }
    else t=true;
    return t;
}

int ans(int a, int b){
    int sum=0;
    for(int i=a; i<=b; i++){
        if(i%3==0 || ans2(i)){
            sum++;
        }
    }

    return sum;
}


int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    cin>>a>>b;
    cout<<ans(a,b);

    return 0;
}