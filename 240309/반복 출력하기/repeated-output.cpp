#include <iostream>
void pprint(int n){
    for(int i=0; i<n; i++){
        printf("%s","12345^&*()_\n");
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    std::cin>>n;
    pprint(n);
    return 0;
}