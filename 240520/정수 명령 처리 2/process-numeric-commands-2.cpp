#include <iostream>
#include <queue>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    queue<int> q;
    int a;
    cin>>a;
    for(int i=0; i<a; i++){
        int b;
        string c;
        cin>>c;
        if(c=="push"){
            cin>>b;
            q.push(b);
        }
        else if(c=="size"){
            cout<<q.size()<<endl;
        }
        else if(c=="empty"){
            if(q.empty()){
                cout<<1<<endl;
            }
            else cout<<0<<endl;
        }
        else if(c=="front"){
            cout<<q.front()<<endl;
        }
        else{
            cout<<q.front()<<endl;
            q.pop();
        }
    }
    return 0;
}