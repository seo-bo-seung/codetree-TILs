#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    std::cin>>n;
    for(int i=0; i<n; i++){
        for(int k=0; k<n-i-1; k++){
            cout<<" ";
        }
        for(int j=0; j<i+1; j++){
            cout<<"* ";
        }
        for(int k=0; k<n-i-1; k++){
            cout<<" ";
        }
        cout<<endl;
    }

    for(int i=1; i<n; i++){
        for(int k=0; k<i; k++){
            cout<<" ";
        }
        for(int j=0; j<n-i; j++){
            cout<<"* ";
        }
        for(int k=0; k<i; k++){
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}