#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    int a,b;
    vector<int> v;
    queue<int> q;
    cin>>a>>b;
    for(int i=1; i<=a; i++){
        q.push(i);
    }

    while(1){
        if(q.empty()) break;
        else{
            for(int i=0; i<b; i++){
                if(i==b-1){
                    v.push_back(q.front());
                    q.pop();
                }
                else{
                    q.push(q.front());
                    q.pop();
                }
            }
        }
    }
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    return 0;
}