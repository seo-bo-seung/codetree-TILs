#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    vector<string> v;
    for(int i=0; i<n; i++){
        string t;
        cin>>t;
        v.push_back(t);
    }
    char c;
    cin>>c;
    float sum=0;
    int ans=0;
    for(int i=0; i<n; i++){
        if(v[i][0]==c){
            ans++;
            sum+=v[i].size();
        }
    
    }
    printf("%d %.2f",ans,sum/ans);

    return 0;
}