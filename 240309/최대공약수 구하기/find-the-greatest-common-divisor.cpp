#include <iostream>

using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    cin>>n>>m;
    int ans;
    for(int i=1; i<=n; i++){
        if(n%i==0 && m%i==0){
            ans=i;
        }
    }
    cout<<ans;
    return 0;
}