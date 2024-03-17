#include <iostream>
#include <string>
#include <algorithm>

#define MAX_N 100

using namespace std;

// 변수 선언
int n;
string word_list[MAX_N];

int main() {    
    // 입력
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        cin >> word_list[i];
    }
    
    // 문자열 사전순 정렬
    sort(word_list, word_list + n);
    
    for(int i = 0; i < n; i++)
        cout << word_list[i] << endl;
    return 0;
}