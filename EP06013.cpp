#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
int T;
struct Fraction{
    long long a,b;
};
void read_input(Fraction &p){
    cin >> p.a >> p.b;
}
long long lcm (long long a,long long b){
    return a*b/__gcd(a,b);
}
void rutgon (Fraction &x){
    int i = __gcd(x.a,x.b);
    x.a /= i;
    x.b /= i;
}
Fraction cong (Fraction x,Fraction y){
    Fraction c;
    int mau = lcm(x.b,y.b);
    x.a *= mau/x.b;
    y.a *= mau/y.b;
    c.a = x.a+y.a;
    c.b = mau;
    rutgon(c);
    c.a = pow(c.a,2);
    c.b = pow(c.b,2);
    rutgon(c);
    return c;
}
Fraction nhan (Fraction x,Fraction y,Fraction c){
    Fraction d;
    d.a = x.a * y.a * c.a;
    d.b = x.b * y.b * c.b;
    rutgon(d);
    return d;
}
void process (Fraction x,Fraction y){
    Fraction c = cong(x,y);
    cout << c.a << "/" << c.b << " ";
    Fraction d = nhan(x,y,c);
    cout << d.a << "/" << d.b << "\n";
}
int main() {
    int t;
    cin >> T;
    while (T--) {
        Fraction A;
        Fraction B;
        read_input(A);
        read_input(B);
        process(A, B);
    }
}
