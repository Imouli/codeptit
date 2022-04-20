#include<bits/stdc++.h>
using namespace std;
class Point{
    private:
    double x,y;
    public:
    void input();
    friend double distance (Point&,Point&);
    friend bool check(Point&,Point&,Point&);
    friend double area(Point&,Point&,Point&);
};
void Point::input(){
    cin >> x >> y;
}
double distance(Point &A,Point &B){
    return sqrt((A.x - B.x) * (A.x - B.x) + (A.y - B.y) * (A.y - B.y));
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
double area(Point &A,Point &B,Point &C){
    double a = distance(A,B);
    double b = distance(A,C);
    double c = distance(B,C);
    double p = (a + b + c) / 2;
    double S  =  sqrt(p * (p - a) * (p - b) * (p - c));
    return S;
}
void output(Point &A,Point &B,Point &C){
    if (check(A,B,C)){
        cout << setprecision(2) << fixed << area(A,B,C) << endl;
    }
    else{
        cout << "INVALID" << endl;
    }
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