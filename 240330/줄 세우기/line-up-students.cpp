#include <iostream>
#include <algorithm>

using namespace std;

class Student {
    public:
        int tall, weight, number;

        Student(int tall, int weight, int number) {
            this->tall = tall;
            this->weight = weight;
            this->number = number;
        }
        Student(){}
};

bool cmp(Student a, Student b) {
    if(a.tall==b.tall){
        if(a.weight==b.weight){
            a.number>b.number;
        }
        else{
            a.weight>b.weight;
        }
    }
    return a.tall > b.tall;
}

int main() {
    int n;
    cin>>n;

    Student students[1001];
    int tall;
    int weight;
    int number;
    for(int i=0; i<n; i++){
        cin>>tall>>weight;
        students[i]=Student(tall,weight,i+1);
    }
    sort(students, students + n, cmp); // 국어 점수 기준 내림차순 정렬

    // 정렬 이후 등수별 학생 번호 출력
    for(int i = 0; i < n; i++)
        cout << students[i].tall<<" "<<students[i].weight<<" "<<students[i].number<<endl;

    return 0;
}