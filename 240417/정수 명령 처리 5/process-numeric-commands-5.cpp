#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    string a;
    int b;
    vector<int> v;
    for(int i=0; i<n; i++){
        cin>>a;
        if(a=="push_back"){
            cin>>b;
            v.push_back(b);
        }
        else if(a=="get"){
            cin>>b;
            cout<<v[b-1]<<endl;
        }
        else if(a=="size"){
            cout<<v.size()<<endl;
        }
        else{
            v.pop_back();
        }
    }

    return 0;
}