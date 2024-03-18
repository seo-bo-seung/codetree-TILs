#include <iostream>
#include <string>
using namespace std;

class Student{
    public:
        int level;
        string id;

        Student(string id="codetree", int level=10){
            this->id=id;
            this->level=level;
        }
};


int main() {
    // 여기에 코드를 작성해주세요.
    string id;
    int level;
    Student s1=Student();
    cout<<"user "<<s1.id<<" lv "<<s1.level<<endl;
    cin>>id>>level;
    s1.id=id;
    s1.level=level;
    cout<<"user "<<s1.id<<" lv "<<s1.level<<endl;
    return 0;
}