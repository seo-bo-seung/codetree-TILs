#include <iostream>
using namespace std;
int n;
int arr[11];

int gcd(int a, int b) {
    if(b == 0) return a;  // b == 0이면 더 이상 최대공약수를 갖지 않기 때문에 a를 반환한다.
    else gcd(b, a%b);  // 유클리드 호제법을 활용하여서 a, b의 최대 공약수를 b, r(a%b)로 치환한다.
}

// gcd는 a, b의 최대공약수이다.
int lcm(int a, int b) {
    return a*b/gcd(a,b);
}

int Ans(int n){
    int tmp=1;
    for(int i=0; i<n; i++){
        tmp=lcm(tmp,arr[i]);
    }
    return tmp;
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<Ans(n);

    return 0;
}