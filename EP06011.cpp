#include<bits/stdc++.h>
#include<string>
using namespace std;
struct Student{
    int stt;
    string id;
    string name;
    string lop;
    string email;
    string Corporation;
};
bool cmp (Student a,Student b){
    return b.id > a.id;
}
void input(Student p[],int n){
    for (int i = 0; i < n; i++){
        p[i].stt = i + 1;
        getline(cin >> ws,p[i].id);
        getline(cin >> ws,p[i].name);
        getline(cin >> ws,p[i].lop);
        getline(cin >> ws,p[i].email);
        getline(cin >> ws,p[i].Corporation);
    }
}
int main(){
    int n;
    cin >> n;
    Student a[n];
    input(a,n);
    sort(a,a + n,cmp);
    int coop;
    cin >> coop;
    while (coop --){
        string doitac;
        cin  >> doitac;
        for (int j = 0 ; j < n ; j++){
            if (a[j].Corporation == doitac){
                cout << a[j].stt << " " << a[j].id << " " << a[j].name << " " <<  a[j].lop << " " << a[j].email << " " << a[j].Corporation << endl;
            }
        }
    }
}