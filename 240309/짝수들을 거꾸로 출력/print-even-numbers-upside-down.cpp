#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int t;
        cin>>t;
        if(t%2==0){
            v.push_back(t);
        }
    }
    reverse(v.begin(),v.end());
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    return 0;
}