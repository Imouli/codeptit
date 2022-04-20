#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
struct Timestamps{
    int hour;
    int min;
    int sec;
};
bool compare(const Timestamps &d1, const Timestamps &d2)
{
    if (d1.hour < d2.hour)
        return true;
    if (d1.hour == d2.hour && d1.min < d2.min)
        return true;
    if (d1.hour == d2.hour && d1.min == d2.min &&
                              d1.sec < d2.sec)
        return true;
    return false;
}
  
void sortTime(Timestamps arr[], int n)
{
    sort(arr,arr+n, compare);
}
void input(Timestamps p[],int n){
    for(int i = 0; i < n; i++){
        cin.ignore();
        cin >> p[i].hour;
        cin >> p[i].min;
        cin >> p[i].sec;
    }
}
void print (Timestamps p[],int n){
    for (int i = 0; i < n; i ++){
        cout << p[i].hour << " " << p[i].min << " " << p[i].sec << endl;
    }
}
int main(){
    int n;
    cin >> n;
    Timestamps p[n];
    input(p,n);
    sortTime(p,n);
    print(p,n);
}