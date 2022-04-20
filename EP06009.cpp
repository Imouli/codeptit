#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;
struct student{
    string ID;
    string name;
    string lop;
    float d1,d2,d3;
};
bool cmp(student x,student y){
    string a  = x.name;
    string b  = y.name;
    return b > a;
}
void input( student p[],int n){
    for(int i =  0 ; i < n ; i++){
        getline(cin >> ws, p[i].ID);
        getline(cin >> ws, p[i].name);
        getline(cin >> ws, p[i].lop);
        cin >> p[i].d1 >> p[i].d2 >> p[i].d3;
    }
}
void output (student p[],int n){
    for(int i = 0 ;i < n; i++){
        int stt = i + 1;
        cout << stt  << " " <<  p[i].ID << " " << p[i].name << " " << p[i].lop << " " << fixed << setprecision(1) << p[i].d1 << " " << p[i].d2 << " "  << p[i].d3 << endl; 
    }
}
int main(){
    int n;
    cin >> n;
    student list[101];
    input(list,n);
    sort(list,list + n,cmp);
    output(list,n);
}