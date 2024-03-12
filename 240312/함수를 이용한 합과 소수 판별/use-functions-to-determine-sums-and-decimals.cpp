#include <iostream>
using namespace std;

bool IsPrime(int i){
    int n=0;
    bool flag;
    if(i==1) return false;
    else{
        for(int j=2; j<=i; j++){
            if(i%j==0) n++;
        }
    }
    if(n==1) flag=true;
    else flag=false;
    return flag;
}

bool IsEven(int i){
    int sum=0;
    while(i>0){
        sum+=i%10;
        i=i/10;
    }
    if(sum%2==0) return true;
    else return false;
}

int IsNum(int a, int b){
    int num=0;
    for(int i=a; i<=b; i++){
        if(IsPrime(i) && IsEven(i)){
            num++;
        }
    }
    return num;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    scanf("%d %d",&a,&b);
    cout<<IsNum(a,b);
    return 0;
}