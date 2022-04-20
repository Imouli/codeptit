#include<bits/stdc++.h>
using namespace std;
class Complex{
    private:
    int a,b;
    public :
    void input();
    friend Complex cong(Complex&,Complex&);
    friend Complex nhan(Complex&,Complex&);
    void output();   
};
void Complex::input(){
    cin >> a >> b;
}
Complex cong(Complex &A,Complex &B){
    Complex C;
    int thuc = A.a + B.a;
    int ao = A.b + B.b;
    C.a = thuc * A.a - ao * A.b;
    C.b = thuc * A.b + ao * A.a;
    return C;
}
Complex nhan(Complex &A,Complex &B){
    Complex D;
    int thuc = A.a + B.a;
    int ao = A.b + B.b;
    D.a = thuc * thuc - ao * ao;
    D.b = thuc * ao + ao * thuc;
    return D;
}
void Complex::output() {
     cout << a << " " ;
     if (b < 0){
         cout <<  "-" << " " << abs(b);
     }
     else{
         cout << "+" << " " << b;
     }
     cout << "i";
}
int main(){
    int t;
    cin >> t;
    while(t --){
        Complex A,B,C,D;
        A.input();
        B.input();
        C = cong(A,B);
        D = nhan(A,B);
        C.output();
        cout << ", ";
        D.output();
        cout << endl;
    }
}
