#include <iostream>
#include <algorithm>
using namespace std;

class XY{
    public:
        int x,y,num;

        XY(int x,int y, int num){
            if(x<0) this->x=-x;
            else this->x=x;
            if(y<0) this->y=-y;
            else this->y=y;
            this->num=num;
        }
        XY(){}
};

bool cmp(const XY &a, const XY &b){
    if(a.x+a.y==b.x+b.y){
        return a.num<b.num;
    }
    return a.x+a.y<b.x+b.y;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    int x,y;
    XY arr[1001];
    for(int i=0; i<n; i++){
        cin>>x>>y;
        arr[i]=XY(x,y,i+1);
    }
    sort(arr,arr+n,cmp);
    for(int i=0; i<n; i++){
        cout<<arr[i].num<<endl;
    }
    return 0;
}