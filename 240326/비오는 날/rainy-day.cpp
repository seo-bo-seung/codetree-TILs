#include <iostream>
#include <string>
using namespace std;

class Pre{
    public:
        string date;
        string day;
        string weather;

        Pre(string date, string day, string weather){
            this->date=date;
            this->day=day;
            this->weather=weather;
        }

        Pre(){}

};


int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    string date;
    string day;
    string weather;
    Pre pre[101];
    Pre pre2[101];
    for(int i=0; i<n; i++){
        cin>>date>>day>>weather;
        pre[i]=Pre(date,day,weather);
    }
    string min="3000-12-31";
    int idx;
    for(int i=0; i<n; i++){
        if(pre[i].weather=="Rain"){
            if(min>pre[i].date){
                min=date;
                idx=i;
            }
        }
    }
    cout<<pre[idx].date<<" "<<pre[idx].day<<" "<<pre[idx].weather;

    return 0;
}