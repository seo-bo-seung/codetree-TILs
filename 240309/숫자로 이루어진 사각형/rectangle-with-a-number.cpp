#include <iostream>

void ans(int n){
    int k=1;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d ",k);
            k++;
            if(k==10) k=1;
        }
        printf("\n");
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    std::cin>>n;
    ans(n);
    return 0;
}