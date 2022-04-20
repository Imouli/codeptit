#include<bits/stdc++.h>
using namespace std;
struct Point{
    double x,y;
};
double area(Point &a,Point &b, Point &c){
    return abs((b.x-a.x)*(c.y-a.y)-(c.x-a.x)*(b.y-a.y)) / 2;
}
void input(Point a[],int n){
    for (int i = 0; i < n ;i ++){
        cin >> a[i].x >> a[i].y;
    }
}
void output(Point a[], int n){
    double result = 0;
    for(int i = 1; i <= n - 2 ; i ++){
        result += area(a[0],a[i],a[i+1]);
    }
    cout << fixed << setprecision(3) << result << endl;
}
int main(){
    int t;
    cin >> t;
    while(t --){
        int n;
        cin >> n;
        Point a[n];
        input(a,n);
        output(a,n);
    }
}