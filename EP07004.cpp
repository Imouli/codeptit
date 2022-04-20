#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class  Fraction{
    private:
     ll ts;
     ll ms;
    public:
    friend void rutgon(Fraction &);
    friend Fraction quydong(Fraction&,Fraction&);
    void input();
    void output();
};
ll lcm (ll a,ll b){
    return a*b/__gcd(a,b);
}
void rutgon (Fraction &x){
    ll i = __gcd(x.ts,x.ms);
    x.ts = x.ts / i;
    x.ms = x.ms / i;
}
Fraction quydong(Fraction &A,Fraction &B){
    Fraction C; 
    ll mau = lcm(A.ms,B.ms);
    A.ts *= (mau / A.ms);
    B.ts *= (mau / B.ms);
    C.ts = A.ts + B.ts;
    C.ms = mau;
    rutgon(C);
    return C;
}
void Fraction::input(){
    cin >> ts >>  ms;
}
void Fraction::output(){
    cout <<ts << "/" << ms;
}
int main(){
    Fraction A,B,C;
    A.input();
    B.input();
    C = quydong(A,B);
    C.output();
}
