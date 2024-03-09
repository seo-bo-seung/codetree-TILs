#include <iostream>

void pprint(int a,int b){
    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            printf("%d",1);
        }
        printf("\n");
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    std::cin>>n>>m;
    pprint(n,m);
    return 0;
}