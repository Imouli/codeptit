#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
class Teacher{
    private:
    string code;
    string name;
    ll base_salary;
    public:
    void input();
    ll check_level();
    ll check_fund();
    ll total_income();
    void output();
};
void Teacher::input(){
    getline(cin >> ws,code);
    getline(cin >> ws,name);
    cin >> base_salary;
}
ll Teacher::check_level(){
    if (code[2] == '0'){
        ll num = code[3] - '0';
        return num;
    }
    else{
        ll num  = 0;
        num = code[2] - '0';
        num *= 10;
        num += (code[3] - '0');
        return num;
    }
}
ll Teacher::check_fund(){
    string sub = code.substr(0,2);
    if (sub == "HT"){
        ll x = 2000000;
        return x;
    }
    else if (sub == "HP"){
        ll x = 900000;
        return x;
    }
    else if (sub == "GV"){
        ll x = 500000;
        return x;
    }
}
ll Teacher::total_income(){
    return base_salary * check_level() + check_fund();
}
void Teacher::output(){
    cout << code << " " << name << " " << check_level() << " " << check_fund() << " " << total_income();
}
int main(){
    Teacher A;
    A.input();
    A.output();
}