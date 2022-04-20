#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
struct Student{
    string id = "B20DCCN001";
    string name;
    string lop;
    string date;
    float GPA;
};
void input(Student &p){
    getline(cin, p.name);
    cin >> p.lop;
    cin.ignore();
    getline(cin,p.date);
    cin >> p.GPA;
}
void print(Student &p){
    cout << p.id << " " << p.name <<  " " << p.lop << " " ;
    if(p.date[1] == '/'){
        p.date.insert(0,"0");
    }
    if(p.date[4] == '/'){
        p.date.insert(3,"0");
    }
    cout << p.date << " " <<  fixed << setprecision(2) << p.GPA; 
}
int main(){
    struct Student a;
    input(a);
    print(a);
    return 0;
}