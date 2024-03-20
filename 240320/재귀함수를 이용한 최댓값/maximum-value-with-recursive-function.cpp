#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int arr[101];
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int max=0;
    for(int i=0; i<n; i++){
        if(max<arr[i]) max=arr[i];
    }
    printf("%d",max);

    return 0;
}