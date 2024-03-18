#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    cin>>a;
    int t=a.find('e');
    a.erase(t,1);
    cout<<a;
    return 0;
}