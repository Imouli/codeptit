#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
class Point{
    private :
    double x,y;
    public :
    void input();
    friend double distance(Point&,Point&);
    friend void output (Point&,Point&);
};
double Point :: getx(){
    return x;
}
double Point :: gety(){
    return y;
}
void Point :: input(){
     cin >> x >> y;
}
double distance(Point &A,Point &B){
    double dis =  (sqrt(pow(A.x - B.x,2) + pow(A.y - B.y,2)));
    return dis;
}
void output (Point &A, Point &B){
    cout << fixed << setprecision(4) << distance(A,B) << endl;
}

int main( ){
    int t;
    cin >> t;
    while (t--){                                             
        Point A,B;
        A.input();
        B.input();
        output(A,B);
    }
}