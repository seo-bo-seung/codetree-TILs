#include <iostream>
#include <string>
using namespace std;

class Secret {
    public:
        int time;
        string code;
        char place;

        Secret(string code, char place, int time){
            this->time=time;
            this->code=code;
            this->place=place;
        }
        
};

int main() {
    // 여기에 코드를 작성해주세요.
    int time;
    string code;
    char place;
    cin>>code>>place>>time;
    Secret s1=Secret(code,place,time);
    cout<<"secret code : "<<s1.code<<endl;
    cout<<"meeting point : "<<s1.place<<endl;
    cout<<"time : "<<s1.time;
    return 0;
}