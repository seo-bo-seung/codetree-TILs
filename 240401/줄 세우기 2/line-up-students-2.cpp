#include <iostream>
#include <algorithm>
using namespace std;

class Stu{
    public:
        int tall;
        int weight;
        int num;

        Stu(int tall,int weight, int num){
            this->tall=tall;
            this->weight=weight;
            this->num=num;
        }
        Stu(){}
};

bool cmp(const Stu &a, const Stu &b){
    if(a.tall==b.tall){
        return a.weight>b.weight;
    }
    return a.tall<b.tall;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    int tall,weight;
    Stu arr[1001];
    for(int i=0; i<n; i++){
        cin>>tall>>weight;
        arr[i]=Stu(tall,weight,i+1);
    }
    sort(arr,arr+n,cmp);
    for(int i=0; i<n; i++){
        cout<<arr[i].tall<<" "<<arr[i].weight<<" "<<arr[i].num<<endl;
    }
    return 0;
}