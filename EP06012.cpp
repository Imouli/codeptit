#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;
struct human{
    string name;
    string dob;
};
bool cmp (human &x, human &y){
    string  a= x.dob;
    string  b= y.dob;
    int ngay1= (a[0] - '0') * 10 + (a[1] - '0' );
    int ngay2= (b[0] - '0') * 10 + (b[1] - '0' );
    int thang1 = (a[3] - '0') * 10 + (a[4] - '0');
    int thang2 = (b[3] - '0') * 10 + (b[4] - '0');
    int nam1 = stoi(a.substr(6));
    int nam2 = stoi(b.substr(6));
    if (nam1 != nam2) return nam2 > nam1;
    if (thang1 != thang2) return thang2 > thang1;
    return ngay2 > ngay1; 
}
void input (human p[],int n){
    for (int i = 0 ; i < n; i++){
        cin.ignore();
        cin >> p[i].name;
        cin >> p[i].dob;
    }
}
void output(human p[],int n){
    cout << p[n-1].name << endl;
    cout << p[0].name << endl;
}
int main(){
    human list[100];
    int n;
    cin >> n;
    input(list,n);
    sort(list,list + n,cmp);
    output(list, n);
}
