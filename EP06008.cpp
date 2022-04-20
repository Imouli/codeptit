#include<bits/stdc++.h>
using namespace std;
struct Itemlist{
    string id;
    string name;
    string group;
    double nhap;
    double ban;
    double profit;
};
void input(Itemlist p[],int n ){
     for (int i = 1; i <= n; i++){
         p[i].id = to_string(i);
         cin.ignore();
         getline(cin,p[i].name);
         getline(cin,p[i].group);
         cin >> p[i].nhap;
         cin >> p[i].ban;
         p[i].profit = p[i].ban - p[i].nhap;
     }
}
void soft(Itemlist p[],int n){
    for(int i = 1 ; i <= n-1;i++){
        for(int j = i+1;j <= n; j++){
           if (p[i].profit < p[j].profit){
               Itemlist temp = p[i];
               p[i] = p[j];
               p[j] = temp;
           } 
        }
    }
}
void print(Itemlist p[],int n){
    for(int i = 1; i<= n; i++){
        cout << p[i].id << "  " << p[i].name << " " << p[i].group << " " <<  fixed << setprecision(2) << p[i].profit << endl;
    }
}
int main(){
    Itemlist list[50];
    int n;
    cin  >> n;
    input(list,n);
    soft(list,n);
    print(list,n);
    return 0;
}