#include <iostream>
#include <deque>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    deque<int> s;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        string a;
        int b;
        cin>>a;
        if(a=="push_back"){
            cin>>b;
            s.push_back(b);
        }
        else if(a=="push_front"){
            cin>>b;
            s.push_front(b);
        }
        else if(a=="pop_front"){
            cout<<s.front()<<endl;
            s.pop_front();
        }
        else if(a=="pop_back"){
            cout<<s.back()<<endl;
            s.pop_back();
        }
        else if(a=="size"){
            cout<<s.size()<<endl;
        }
        else if(a=="empty"){
            if(s.empty()){
                cout<<1<<endl;
            }
            else cout<<0<<endl;
        }
        else if(a=="front"){
            cout<<s.front()<<endl;
        }
        else{
            cout<<s.back()<<endl;
        }
    }
    return 0;
}