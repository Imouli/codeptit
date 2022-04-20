#include<iostream>
typedef long long ll;
using namespace std;
struct Fraction{
    ll ts, ms;
};
ll UCLN(ll a,ll b){
    if (a%b!=0)
        return UCLN(b,a%b);
    else
        return b;
}
void input(Fraction &p){
    cin >> p.ts >>  p.ms;
}
void simplify(Fraction &p){
    ll ucln = UCLN(p.ts,p.ms);
    p.ts = p.ts / ucln;
    p.ms = p.ms / ucln;
}
void print (Fraction &p){
    cout << p.ts << "/" << p.ms;
}
int main() {
	struct Fraction p;
	input(p);
	simplify(p);
	print(p);
	return 0;
}
