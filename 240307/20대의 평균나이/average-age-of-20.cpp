#include <iostream>

int main() {
    int sum=0;
    int n=0;
    while(1){
        int t;
        
        std::cin>>t;
        if(t<20 || t>29){
            float ans=(float)sum/n;
            printf("%.2f",ans);
            break;
        }
        else{
            n++;
            sum+=t;
        }
    }
    return 0;
}