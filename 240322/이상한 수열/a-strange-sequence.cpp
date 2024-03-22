#include <iostream>
using namespace std;

int Ans(int n){
    if(n==1) return 1;
    else if(n==2) return 2;
    else{
        return Ans(n/3)+Ans(n-1);
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    cout<<Ans(n);
    return 0;
}