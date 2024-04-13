#include <iostream>
#include <string>
#include <limits>

using namespace std;

int offset=1000;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string str;
    int arr[2001]={0};
    int point=offset;
    for(int i=0; i<n; i++){
        getline(cin, str);
        
        int a= stoi(str);
        if(str[-1]=='L'){
            for(int j=a; j>0; j--){
                arr[offset-j]++;
            }
            
        }
        else{
            for(int j=0; j<a; j++){
                arr[offset+j]++;
            }
        }

    }
    int cnt=0;
    for(int i=0; i<2001; i++){
        if(arr[i]>=2) cnt++;
    }
    cout<<cnt;
    return 0;
}