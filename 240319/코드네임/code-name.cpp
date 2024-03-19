#include <iostream>
using namespace std;
class Spy {
public:
    char name;
    int score;

    Spy(char name = 'A', int score = 0) {
        this->name = name;
        this->score = score;
    }
    //Spy(){};
};

int main() {
    // 여기에 코드를 작성해주세요.
    char name;
    int score;
    Spy spy[5];
    /*for (int i = 0; i < 5; i++) {
        scanf("%c", &name);
        scanf("%d", &score);
        spy[i] = Spy(name, score);
    }*/
    for (int i = 0; i < 5; i++) {
        cin >> name >> score;
        spy[i] = Spy(name, score);
    }
    int idx;
    int min = 100;
    for (int j = 0; j < 5; j++) {
        printf("%c %d\n", spy[j].name, spy[j].score);
    }

    for (int i = 0; i < 5; i++) {
        if (spy[i].score < min) {
            idx = i;
            min = spy[i].score;
        }
    }
    printf("%c %d", spy[idx].name, spy[idx].score);
    return 0;
}