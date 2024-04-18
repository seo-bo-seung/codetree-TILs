#include <iostream>
#include <list>
#include <string>

using namespace std;

int main() {
    int n;
    cin>>n;
    string a;
    int b;
    list<int> l;
    for(int i=0; i<n; i++){
        cin>>a;
        if(a=="push_back"){
            cin>>b;
            l.push_back(b);
        }
        else if(a=="push_front"){
            cin>>b;
            l.push_front(b);
        }
        else if(a=="pop_front"){
            cout<<l.front()<<endl;
            l.pop_front();
        }
        else if(a=="pop_back"){
            cout<<l.back()<<endl;
            l.pop_back();
        }
        else if(a=="size"){
            cout<<l.size()<<endl;
        }
        else if(a=="empty"){
            if(l.size()>0){
                cout<<0<<endl;
            }
            else cout<<1<<endl;
        }
        else if(a=="front"){
            cout<<l.front()<<endl;
        }
        else{
            cout<<l.back()<<endl;
        }
    }
   

    return 0;
}