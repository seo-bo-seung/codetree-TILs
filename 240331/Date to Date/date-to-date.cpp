#include <iostream>
using namespace std;

int main() {
    int m1,d1,m2,d2;
    cin>>m1>>d1>>m2>>d2;
    int elapsed_days=1;
    int num_of_days[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

    while(true){
        if(m2==m1 && d2==d1) break;
        elapsed_days++;
        d1++;

        if(d1>num_of_days[m1]){
            m1++;
            d1=1;
        }
    }
    cout<<elapsed_days;
    return 0;
}