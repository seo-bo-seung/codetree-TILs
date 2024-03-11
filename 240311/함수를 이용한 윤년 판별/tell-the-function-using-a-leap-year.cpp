#include <iostream>
using namespace std;

bool Isyear(int y){
    bool t;
    if(y%4==0){
        t=true;
    }
    else if(y%100==0 && y%400!=0){
        t=false;
    }
    else t=false;
    return t;
} 

int main() {
    // 여기에 코드를 작성해주세요.
    int y;
    scanf("%d",&y);
    if(Isyear(y)){
        cout<<"true";
    }
    else cout<<"false";
    return 0;
}