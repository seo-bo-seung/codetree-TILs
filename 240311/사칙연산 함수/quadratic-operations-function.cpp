#include <iostream>
#include <string>

using namespace std;

int IsAdd(int a, char o, int c){
    return a+c;
}
int IsSub(int a, char o, int c){
    return a-c;
}
int IsDiv(int a, char o, int c){
    return a/c;
}
int IsMul(int a, char o, int c){
    return a*c;
}

int main() {
    // 여기에 코드를 작성해주세요.

    int a,c;
    char o;
    scanf("%d %c %d",&a, &o, &c);
    if(o=='+') {
        printf("%d %c %d = %d",a,o,c,IsAdd(a,o,c));
    }
    else if(o=='-'){
        printf("%d %c %d = %d",a,o,c,IsSub(a,o,c));
    }
    else if(o=='/'){
        printf("%d %c %d = %d",a,o,c,IsDiv(a,o,c));
    }
    else if(o=='*') printf("%d %c %d = %d",a,o,c,IsMul(a,o,c));
    else cout<<"False";

    return 0;
}