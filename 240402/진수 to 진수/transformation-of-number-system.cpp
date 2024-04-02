#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    cin>>a>>b;
    string n;
    cin>>n;
    int num = 0;
    for(int i = 0; i < (int) n.size(); i++)
        num = num * a + (n[i] - '0');

    int arr[30];
    int cnt=0;
    while(1){
        if(num<b){
            arr[cnt++]=num;
            break;
        }
        else{
            arr[cnt++]=num%2;
            num/=2;
        }
    }
    for(int i=cnt-1; i>=0; i--){
        cout<<arr[i];
    }
    
    return 0;
}