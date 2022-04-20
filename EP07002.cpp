#include<bits/stdc++.h>
#include<string>
using namespace std;
class Chunhat{
    private:
    int dai,rong;
    string color;
    public:
    void input();
    int getdai();
    int getrong();
    string getcolor();
};
int Chunhat::getdai(){
    return dai;
}
int Chunhat::getrong(){
    return rong;
}
string Chunhat::getcolor(){
    return color;
}
int Chuvi(Chunhat &p){
    return (p.getdai() + p.getrong()) * 2;
}
int dientich(Chunhat &p){
    return p.getdai() * p.getrong();
}
string Chuanhoa (Chunhat &p){
    string mau = p.getcolor();
    mau[0] = toupper(mau[0]);
    for(int i = 1; i < mau.size(); i++){
        mau[i] = tolower(mau[i]);
    }
    return mau;
}
void Chunhat::input(){
    cin >> dai >> rong >> color;
}
void output(Chunhat &p){
     if (Chuvi(p) > 0 && dientich(p) > 0){
         cout << Chuvi(p) << " " << dientich(p) << " " << Chuanhoa(p);
     }
     else{
         cout << "INVALID";
     }
}
int main(){
    Chunhat A;
    A.input();
    output(A);
}

