#include <iostream>
#include <string>
using namespace std;

int main() {
    // 변수 선언 및 입력
    string binary;
    cin >> binary;
    int arr[20];
    
    // 십진수로 변환합니다.
    int num = 0;
    for(int i = 0; i < (int) binary.size(); i++)
        num = num * 2 + (binary[i] - '0');
    
    num*=17;
    int cnt=0;
    while(1){
        if(num<1){
            break;
        }
        arr[cnt++]=num%2;
        num/=2;
    }

    // 출력
    for(int i=cnt-1; i>=0; i--){
        cout<<arr[i];
    }
    return 0;
}