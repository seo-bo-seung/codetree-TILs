#include <iostream>
using namespace std;

int IsAns(int n){
    if(n<=0) return 0; 
    if(n%2==0){
        return n+IsAns(n-2);
    }
    else{
        return n+IsAns(n-2);
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    cout<<IsAns(n);
    return 0;
}