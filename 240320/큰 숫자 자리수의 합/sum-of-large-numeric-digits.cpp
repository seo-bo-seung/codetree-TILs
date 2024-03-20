#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c;
    cin>>a>>b>>c;

    int sum=a*b*c;
    int ans=0;
    while(sum>0){
        ans=ans+sum%10;
        sum=sum/10;
    }
    cout<<ans;
    return 0;
}