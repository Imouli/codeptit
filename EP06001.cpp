#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
struct Point{
    double x,y;
};
void input(Point &p){
    cin >> p.x >> p.y;
}
double distance(Point &p1,Point &p2){
    return  (sqrt(pow(p1.x - p2.x,2) + pow(p2.y - p1.y,2)));
}
int main(){
struct Point A, B;
int t;
cin>>t;
while(t--){
 input(A); input(B);
cout << fixed << setprecision(4) << distance(A,B) << endl;
}
return 0;
}