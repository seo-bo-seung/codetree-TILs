#include <iostream>
using namespace std;

int cnt;
void IsAns(int *arr){
    int sum=0;
    while(1){
        if(cnt<1) break;
        else {
            sum+=arr[cnt-1];
            if(cnt%2==0){
                cnt/=2;
            }
            else{
                cnt-=1;
            }
        }
    }
    cout<<sum;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    cin>>n>>m;
    int arr[101];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    cnt=m;
    IsAns(arr);
    return 0;
}