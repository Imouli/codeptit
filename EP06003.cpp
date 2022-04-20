#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
struct Examinee{
    string name;
    string date;
    float score1;
    float score2;
    float score3;
};
void input(Examinee &p){
    getline(cin, p.name);
    cin >> p.date;
    cin >> p.score1 >> p.score2 >> p.score3;
}
void print(Examinee &p){
    cout << p.name << " " << p.date << " " << fixed << setprecision(1) <<p.score1 + p.score2 + p.score3;
}
int main(){
    struct Examinee A;
    input(A);
    print(A);
    return 0;
}