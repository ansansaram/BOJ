#include<iostream>
using namespace std;

int main(){
    int score;
    cin>>score;
    char grade;

    switch(score/10){
        case 9:
        case 10:
            grade = 'A';
            break;
        case 8:
            grade = 'B';
            break;
        case 7:
            grade = 'C';
            break;
        case 6:
            grade = 'D';
            break;
        default: grade = 'F'; break;
    }

    cout<<grade;

    return 0;
}