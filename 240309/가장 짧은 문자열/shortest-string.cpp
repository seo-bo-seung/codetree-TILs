#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string a,b,c;
    std::cin>>a>>b>>c;
    int size_a=a.size();
    int size_b=b.size();
    int size_c=c.size();
    if(size_a<size_b && size_a<size_c){
        std::cout<<size_a;
    }
    else if(size_b<size_a && size_b<size_c){
        std::cout<<size_b;
    }
    else std::cout<<size_c;
    return 0;
}