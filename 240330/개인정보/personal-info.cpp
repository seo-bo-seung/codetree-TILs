#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Per{
    public:
        string name;
        int tall;
        float weight;

        Per(string name, int tall, float weight){
            this->name=name;
            this->tall=tall;
            this->weight=weight;
        }
        Per(){}

};

bool cmp(const Per &a, const Per &b){
    return a.name<b.name;
}
bool cmp2(const Per &a, const Per &b){
    return a.tall>b.tall;
}

int main() {
    Per per[5];
    string name;
    int tall;
    float weight;
    for(int i=0; i<5; i++){
        cin>>name>>tall>>weight;
        per[i]=Per(name,tall,weight);
    }
    sort(per,per+5,cmp);
    cout<<"name"<<endl;
    for(int i=0; i<5; i++){
        cout<<per[i].name<<" "<<per[i].tall<<" "<<per[i].weight<<endl;
    }

    sort(per,per+5,cmp2);
    cout<<endl<<"height"<<endl;
    for(int i=0; i<5; i++){
        cout<<per[i].name<<" "<<per[i].tall<<" "<<per[i].weight<<endl;
    }
    return 0;
}