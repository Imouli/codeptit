#include<bits/stdc++.h>
using namespace std;
struct Employee{
    string name;
    string gender;
    string dob;
    string address;
    string tax;
    string contractdate;
};
void input(Employee &p){
    cin.ignore();
    getline(cin,p.name);
    cin >> p.gender;
    cin >> p.dob;
    cin.ignore();
    getline(cin,p.address);
    cin >> p.tax;
    cin >> p.contractdate;
}
void printlist(Employee p[], int n){
    for (int i = 0; i < n; i++){
        string id= to_string(i + 1);
        while (id.size() < 5){
            id.insert(0,"0");
        }
     cout << id << " " << p[i].name << " " << p[i].gender << " " << p[i].dob << " " << p[i].address << " " << p[i].tax << " " << p[i].contractdate << endl;
    }
}
int main(){
    struct Employee lst[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) input(lst[i]);
    printlist(lst,N);
    return 0;
}