#include<bits/stdc++.h>
using namespace std;
#define PI 3.141592653589793238
struct point{
    double x;
    double y;
};
struct Tamgiac{
    double a,b,c;
};
void input(point &p){
    cin >> p.x >> p.y;
}
double distance(point &p1,point &p2){
    return  (sqrt(pow(p1.x - p2.x,2) + pow(p2.y - p1.y,2)));
}
Tamgiac tinhcanh(point &A,point&B,point  &C){
       Tamgiac x;
       x.a = distance(A,B);
       x.b = distance(A,C);
       x.c = distance(B,C);
       return x;
}
int Kiemtra (Tamgiac &x){
    if (x.a + x.b > x.c && x.a + x.c > x.b && x.b + x.c > x.a){
        return 1;
    }
    return 0;
}
double Dientichduongtron(Tamgiac &x){
    double S  = double ( sqrt((x.a + x.b + x.c)*(x.a + x.b - x.c)*(x.b + x.c - x.a)*(x.c + x.a - x.b))) / 4;
    double R = (double)(x.a * x.b * x.c) / (4*S);
    return R * R * PI;
}
int main(){
    int t;
    cin >> t;
    while(t--){
    point A;
    point B; 
    point C;
    Tamgiac x;
    input(A);
    input(B);
    input(C);
    x = tinhcanh(A,B,C);
    if (Kiemtra(x) == 0){
        cout << "INVALID" << endl;
        continue;
    }
    cout << fixed << setprecision(3) << Dientichduongtron(x) << endl;
    }
}
