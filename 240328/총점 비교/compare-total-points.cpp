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

bool cmp(const Test &a, const Test &b){
    return a.kor+a.eng+a.mat<b.kor+b.eng+b.mat;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    string name;
    int kor;
    int eng;
    int mat;
    Test arr[11];
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