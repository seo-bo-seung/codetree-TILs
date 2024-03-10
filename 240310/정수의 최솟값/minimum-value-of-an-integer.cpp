#include <iostream>
using namespace std;

int Add(int a, int b, int c){
    int small;
    if(a<b && a<c){
        small=a;
    }
    else if(b<a && b<c){
        small=b;
    }
    else small=c;
    return small;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c;
    cin>>a>>b>>c;
    cout<<Add(a,b,c);
    
    return 0;
}