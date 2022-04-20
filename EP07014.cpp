#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
class Employee{
    private:
    string Id;
    string name;
    ll base_salary_per_workday;
    ll workday_count;
    string position;
    public:
    void input();
    ll monthly_salary();
    ll bonus();
    ll supporting_fund();
    ll total_income();
    void output();
};
void Employee::input(){
    Id = "NV01";
    getline(cin >> ws,name);
    cin >> base_salary_per_workday >> workday_count;
    getline(cin >> ws,position);
}
ll Employee::monthly_salary(){
    return base_salary_per_workday * workday_count;
}
ll Employee::bonus(){
    if (workday_count >= 25){
        return monthly_salary() * 20 / 100;
    }
    else if(workday_count >= 22 && workday_count < 25){
        return monthly_salary() * 10 / 100;    
    }
    else{
        ll x = 0;
        return x;
    }
}
ll Employee::supporting_fund(){
    if(position == "GD"){
        ll x = 250000;
        return x;
    }
    else if (position == "PGD"){
        ll x = 200000;
        return x;
    }
    else if (position == "TP"){
        ll x = 180000;
        return x;
    }
    else if (position == "NV"){
        ll x = 150000;
        return x;
    }
}
ll Employee::total_income(){
    return monthly_salary() + bonus() + supporting_fund();
}
void Employee::output(){
    cout << Id << " " << name << " " << monthly_salary() << " " << bonus() << " " << supporting_fund() << " " << total_income();
}
int main(){
    Employee A;
    A.input();    
    A.output();
}
