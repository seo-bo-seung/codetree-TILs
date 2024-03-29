#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    int arr[101][101];
    for(int i=0; i<n; i++){
        int tmp=i;
        for(int j=0; j<n; j++){
          
            
            cout<<n-tmp<<" ";
              if(tmp==0) break;
            tmp--;
        }
        cout<<endl;
    }
    return 0;
}