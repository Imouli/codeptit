#include<bits/stdc++.h>
using namespace std;
class Employee {
    private:
    string ID ;
    string name;
    string gender;
    string dob;
    string address;
    string taxnum;
    string contractdate;
    public:
    void input();
    void output();
};
void Employee::input(){
    getline(cin,name);
    cin >> gender;
    cin >> dob;
    cin.ignore();
    getline(cin,address);
    cin >> taxnum;
    cin >> contractdate;
}
void Employee::output(){
    ID = "00001";
    cout << ID << " " << name << " " << gender << " "  << dob << " " << address << " " << taxnum << " " << contractdate; 
}
int main(){
    struct Employee a;
    a.input();
    a.output();
    return 0;
}
