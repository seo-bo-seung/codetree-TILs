#include <iostream>
using namespace std;

bool IsYoon(int y){
    bool flag=false;
    if(y%4==0){
        flag=true;
        if(y%100==0){
            if(y%400) flag=true;
            else flag=false;
        }

    }
    return flag;
}

bool IsExist(int y, int m, int d){
    if(m==1 ||m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
        if(d<=31) return true;
        else return false;
    }
    else if(m==4 || m==6 || m==9|| m==11){
        if(d<=30) return true;
        else return false;
    }
    else if(m==2){
        if(IsYoon(y)){
            if(d<=29) return true;
            else return false;
        }
        else{
            if(d<=28) return true;
            else return false;
        }
    }
}

void IsSeason(int m){
    if(m>=3 && m<=5) cout<<"Spring";
    else if(m>=6 && m<=8) cout<<"Summer";
    else if(m>=9 && m<=11) cout<<"Fall";
    else cout<<"Winter";
}

void IsYear(int y, int m, int d){
    if(IsExist(y,m,d)){
        IsSeason(m);
    }
    else cout<<-1;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int y,m,d;
    cin>>y>>m>>d;
    IsYear(y,m,d);
    return 0;
}