#include <iostream>
#include <string>
using namespace std;

class Region{
    public:
        string name;
        string a;
        string place;
        
        Region(string name,string a, string place){
            this->name=name;
            this->a=a;
            this->place=place;
        }
        Region(){}

};

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    Region region[11];
    for(int i=0; i<n; i++){
        string name;
        string a;
        string place;
        cin>>name>>a>>place;
        region[i] = Region(name, a, place);
    }
    string tmp="a";
    int t;
    for(int i=0; i<n; i++){
        if(region[i].name>tmp){
            tmp=region[i].name;
            t=i;
        }
    }
    cout<<"name "<<region[t].name<<endl<<"addr "<<region[t].a<<endl<<"city "<<region[t].place;
    return 0;
}