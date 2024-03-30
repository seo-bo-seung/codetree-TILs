#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin>>a>>b>>c;
    int elapsed_min=0;
    int num_of_days[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

    while(1){
        if(a<=11 && b<=11 && c<11){
            cout<<-1;
            break;
        }
        if(a==11 && b==11 && c==11) break;
        elapsed_min++;
        c--;
        if(c<0){
            b--;
            c=59;
            if(b<0){
                a--;
                b=23;
            }
        }
    }
    if(a<=11 && b<=11 && c<11){

    }else{
        cout<<elapsed_min;
    }
    
    return 0;
}