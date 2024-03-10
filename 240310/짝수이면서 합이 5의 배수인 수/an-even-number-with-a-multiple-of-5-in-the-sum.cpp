#include <iostream>
using namespace std;
void ans(int n){
    int sum=0;
    sum=n/10+n%10;
    if(sum%5==0 && n%2==0) cout<<"Yes";
    else cout<<"No";
}


int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    ans(n);
    return 0;
}