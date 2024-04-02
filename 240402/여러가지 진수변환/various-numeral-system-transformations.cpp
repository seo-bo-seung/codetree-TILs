#include <iostream>
#include <algorithm>
#include <vector>

#define MAX_DIGIT 20

using namespace std;

int n,b;
int digits[MAX_DIGIT];
int cnt;

int main() {
    // 입력
    cin >> n>>b;
	
    // 이진수로 변환합니다.
    while(true) {
        if(n < b) {
            digits[cnt++] = n;
            break;
        }
        
        digits[cnt++] = n % b;
        n /= b;
    }
    
    // 만들어진 digits 배열을 뒤집어 출력합니다.
    for(int i = cnt - 1; i >= 0; i--)
        cout << digits[i];
    
    return 0;
}