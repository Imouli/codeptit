#include<bits/stdc++.h>
using namespace std;
struct Employee {
    string ID = "00001";
    string name;
    string gender;
    string dob;
    string address;
    string taxnum;
    string contractdate;
};
void input(Employee &p){
    getline(cin,p.name);
    cin >> p.gender;
    cin >> p.dob;
    cin.ignore();
    getline(cin,p.address);
    cin >> p.taxnum;
    cin >> p.contractdate;
}
void print(Employee &p){
    if(p.dob[1] == '/'){
        p.dob.insert(0,"0");
    }
    if(p.dob[4] == '/'){
        p.dob.insert(3,"0");
    }
    if(p.contractdate[1] == '/'){
        p.contractdate.insert(0,"0");
    }
    if(p.contractdate[4] == '/'){
        p.contractdate.insert(3,"0");
    }
    cout << p.ID << " " << p.name << " " << p.gender << " "  << p.dob << " " << p.address << " " << p.taxnum << " " << p.contractdate; 
}
int main(){
    struct Employee a;
    input(a);
    print(a);
    return 0;
}