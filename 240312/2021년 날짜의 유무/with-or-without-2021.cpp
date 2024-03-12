#include <iostream>
using namespace std;

bool IsExist(int m, int d){
    if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
        if(d<=31) return true;
        else return false;
    }
    else if(m==4 || m==6 || m==9 ||m==11){
        if(d<=30) return true;
        else return false;
    }
    else if(m==2){
        if(d<=28) return true;
        else return false;
    }
    else return false;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int m,d;
    cin>>m>>d;
    if(IsExist(m,d)) cout<<"Yes";
    else cout<<"No";
    return 0;
}