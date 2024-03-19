#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[11][11];
    int arr2[11][11];
    int arr3[11][11]={0};
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]!=arr2[i][j]){
                arr3[i][j]=1;
            }
            else{
                arr3[i][j]=0;
            }
        }
    }
    

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}