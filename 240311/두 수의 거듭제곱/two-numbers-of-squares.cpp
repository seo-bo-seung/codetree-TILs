#include <iostream>
using namespace std;
int IsMul(int a, int b){
    int ans=1;
    for(int i=0; i<b; i++){
        ans*=a;
    }
    return ans;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    scanf("%d %d",&a,&b);
    cout<<IsMul(a,b);
    return 0;
}