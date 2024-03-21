#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    int t=0;
    while(1){
        if(n==1)break;
        if(n%2==0){
            n/=2;
            t++;
        }
        else{
            n=n*3+1;
            t++;
        }
    }
    cout<<t;
    return 0;
}