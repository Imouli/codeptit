#include<bits/stdc++.h>
using namespace std;
class Examinee{
    private:
    string name;
    string dob;
    float s1,s2,s3;
    public:
    void input();
    void output();
    float tong();
};
void Examinee ::input(){
    getline(cin >> ws,name);
    getline(cin >> ws,dob);
    cin >> s1 >> s2 >> s3;
}
float Examinee::tong(){
    return s1 + s2 + s3;
}
void Examinee ::output(){
    cout << name << " " << dob << " " << fixed << setprecision(1) << tong();
}
int main (){
    Examinee A;
    A.input();
    A.output();
}