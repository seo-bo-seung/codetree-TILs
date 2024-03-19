#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    int sum=0;
    for(int i=0; i<n; i++){
        int t;
        cin>>t;
        sum+=t;
    }
    string a=to_string(sum);
    a=a.substr(1)+a[0];
    cout<<a;
    return 0;
}