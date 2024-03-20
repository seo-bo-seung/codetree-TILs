#include <iostream>
#include <string>
using namespace std;

class Present{
    public:
        string a;
        int code;

        Present(string a="codetree", int code=50){
            this->a=a;
            this->code=code;
        }
};

int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    int code;
    cin>>a>>code;
    Present pre=Present();
    cout<<"product "<<pre.code<<" is "<<pre.a<<endl;
    pre.a=a;
    pre.code=code;
    cout<<"product "<<pre.code<<" is "<<pre.a;
    return 0;
}