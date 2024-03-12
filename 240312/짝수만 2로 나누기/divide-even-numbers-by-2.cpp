#include <iostream>

void DivArr(int *a, int n){
    for(int i=0; i<n; i++){
        if(a[i]%2==0) printf("%d ",a[i]/2);
        else printf("%d ",a[i]);
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int arr[51];

    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    DivArr(arr, n);

    return 0;
}