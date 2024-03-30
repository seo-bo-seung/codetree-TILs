#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Per{
    public:
        string name;
        int tall;
        int weight;

        Per(string name, int tall, int weight){
            this->name=name;
            this->tall=tall;
            this->weight=weight;
        }
        Per(){}
};

bool cmp(const Per &a, const Per &b){
    if(a.tall==b.tall){
        return a.weight>b.weight;
    }
    return a.tall<b.tall;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    Per per[11];
    string name;
    int tall,weight;
    for(int i=0; i<n; i++){
        cin>>name>>tall>>weight;
        per[i]=Per(name,tall,weight);
    }
    sort(per,per+n,cmp);
    for(int i=0; i<n; i++){
        cout<<per[i].name<<" "<<per[i].tall<<" "<<per[i].weight<<endl;
    }
    return 0;
}