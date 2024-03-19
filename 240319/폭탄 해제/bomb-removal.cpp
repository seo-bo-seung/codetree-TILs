#include <iostream>
#include <string>
using namespace std;


class Code{
    public:
        string a;
        char color;
        int second;

        Code(string a, char color, int second){
            this->a=a;
            this->color=color;
            this->second=second;
        }
};


int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    char color;
    int second;
    cin>>a>>color>>second;
    Code t=Code(a,color,second);
    cout<<"code : "<<t.a<<endl;
    cout<<"color : "<<t.color<<endl;
    cout<<"second : "<<t.second<<endl;
    return 0;
}