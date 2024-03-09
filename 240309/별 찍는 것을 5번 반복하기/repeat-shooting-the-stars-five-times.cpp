#include <iostream>

void star(){
    printf("%s","**********");
}

int main() {
    // 여기에 코드를 작성해주세요.
    for(int i=0; i<5; i++){
        star();
        printf("\n");
    }
    return 0;
}