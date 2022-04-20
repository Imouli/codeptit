#include<bits/stdc++.h>
using namespace std;
class Student {
    private:
    string Id;
    string name;
    string lop;
    string dob;
    float gpa;
    public:
    void input();
    void chuanhoa();
    void output();
};
void Student::input(){
    Id = "B20DCCN001";
    getline(cin >> ws,name);
    getline(cin >> ws,lop);
    getline(cin >> ws,dob);
    cin >> gpa;
}
void Student::chuanhoa(){
      if (dob[1] == '/'){
          dob.insert(0,"0");
      }
      if (dob[4] == '/'){
          dob.insert(3,"0");
      }
}
void Student::output(){
    cout << Id << " " << name << " " << lop << " " << dob << " " << fixed << setprecision(2) <<  gpa;
}
int main(){
    Student A;
    A.input();
    A.chuanhoa();
    A.output();
}
