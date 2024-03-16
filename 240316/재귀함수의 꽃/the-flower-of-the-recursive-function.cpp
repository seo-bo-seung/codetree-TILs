#include <iostream>
using namespace std;

void IsAns(int n){
    if(n==0) return;
    cout<<n<<" ";
    IsAns(n-1);
    cout<<n<<" ";
}

int main() {
    int n;
    cin>>n;
    IsAns(n);

    return 0;
}