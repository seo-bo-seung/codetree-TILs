#include <iostream>
#include <list>
#include <string>

using namespace std;

int main() {
    list<char> l;
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    for(int j=0; j<n; j++){
        l.push_back(s[j]);
    }
    
    char a,b;
    list<char>::iterator it;
    it=l.end();
 

    for(int i=0; i<m; i++){
        cin>>a;
        if(a=='L'){
            if(it!=l.begin()) it--;
        }
        else if(a=='R'){
            if(it!=l.end()) it++;
        }
        else if(a=='D'){
            if(it!=l.end()) it=l.erase(it);
        }
        else if(a=='P'){
            cin>>b;
            l.insert(it,b);
        }        
    }
    for(it=l.begin(); it!=l.end(); it++){
        cout<<*it;
    }
   
    return 0;
}