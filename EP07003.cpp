#include<bits/stdc++.h>
#include<algorithm>
typedef long long ll;
using namespace std;
class Fraction{
    private :
     ll ts;
     ll ms;
     public:
     void input();
     void output();
     void rutgon();
};
void Fraction::input(){
    cin >> ts >> ms;
}
void Fraction::rutgon(){
    ll GCD = __gcd(ts,ms);
    ts = ts / GCD;
    ms = ms / GCD;
}
void Fraction::output(){
    cout << ts << "/" << ms;
}
int main (){
    Fraction A;
    A.input();
    A.rutgon();
    A.output();
}
