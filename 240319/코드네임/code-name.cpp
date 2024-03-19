#include <iostream>

class Spy{
    public:
        char name;
        int score;

        Spy(char name, int score){
            this->name=name;
            this->score=score;
        }
        Spy(){};
};

int main() {
    // 여기에 코드를 작성해주세요.
    char name;
    int score;
    Spy spy[5];
    for(int i=0; i<5; i++){
        scanf("%c %d",&name,&score);
        spy[i].name=name;
        spy[i].score=score;
    }
    int idx;
    int min=100;
    for(int i=0; i<5; i++){
        if(spy[i].score<min){
            idx=i;
            min=spy[i].score;
        }
    }
    printf("%c %d",spy[idx].name,spy[idx].score);
    return 0;
}