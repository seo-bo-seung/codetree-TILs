#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    cin>>a;
    vector<char> v;
    for(int i=1; i<a.size(); i+=2){
        v.push_back(a[i]);
    }
    reverse(v.begin(),v.end());
    for(int i=0; i<v.size(); i++){
        cout<<v[i];
    }

    return 0;
}