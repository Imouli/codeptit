#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
class Point{
    private:
    double x,y;
    public:
    void input();
    friend void output();
    friend double distance (Point&,Point&);
    friend bool check(Point&,Point&,Point&);
    friend double Chuvi(Point&,Point&,Point&);
};
void Point::input(){
    cin >> x >> y;
}
double distance(Point &A,Point &B){
    return sqrt(pow(A.x - B.x,2) + pow(A.y - B.y,2));
}
bool check(Point &A,Point &B,Point &C){
    double a = distance(A,B);
    double b = distance(A,C);
    double c = distance(B,C);
    if (a + b > c && a + c > b && b + c > a){
        return true;
    }
    else
        return false;
}
double Chuvi(Point &A,Point &B,Point &C){
    double a = distance(A,B);
    double b = distance(A,C);
    double c = distance(B,C);
    return a + b + c;
}
void output(Point &A,Point &B,Point &C){
    if (check(A,B,C)){
        cout << fixed << setprecision(3) << Chuvi(A,B,C) << endl;
    }
    else
        cout << "INVALID" << endl;
}
int main (){
    int t;
    cin >> t;
    while(t --){
        Point A,B,C;
        A.input();
        B.input();
        C.input();
        output(A,B,C);
    }
}
