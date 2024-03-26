#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
class Tall{
    public:
        string name;
        int tall;
        int weight;

        Tall(string name, int tall, int weight){
            this->name=name;
            this->tall=tall;
            this->weight=weight;
        }
        Tall(){}
};

bool cmp(const Tall &a, const Tall &b){
    return a.tall<b.tall;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    Tall tmp[11];
    string name;
    int tall;
    int weight;
    for(int i=0; i<n; i++){
        cin>>name>>tall>>weight;
        tmp[i]=Tall(name,tall,weight);
    }
    sort(tmp,tmp+n,cmp);
    for(int i=0; i<n; i++){
        cout << tmp[i].name<<" "<<tmp[i].tall<<" "<<tmp[i].weight<<endl;
    }
    return 0;
}