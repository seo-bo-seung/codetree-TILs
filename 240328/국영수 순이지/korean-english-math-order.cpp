#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Test{
    public:
        string name;
        int kor;
        int eng;
        int mat;

        Test(string name, int kor, int eng, int mat){
            this->name=name;
            this->kor=kor;
            this->eng=eng;
            this->mat=mat;
        }
        Test(){}
};

bool cmp(Test a, Test b){
    if(a.kor==b.kor){
        if(a.eng==b.eng){
            return a.mat>b.mat;
        }
        else{
            return a.eng>b.eng;
        }
    }
    else{
        return a.kor>b.kor;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    Test arr[11];
    string name;
    int kor;
    int eng;
    int mat;
    for(int i=0; i<n; i++){
        cin>>name>>kor>>eng>>mat;
        arr[i]=Test(name,kor,eng,mat);
    }
    sort(arr,arr+n,cmp);
    for(int i=0; i<n; i++){
        cout<<arr[i].name<<" "<<arr[i].kor<<" "<<arr[i].eng<<" "<<arr[i].mat<<endl;
    }
    return 0;
}