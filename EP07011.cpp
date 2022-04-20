#include<bits/stdc++.h>
using  namespace std;
class Examinee{
    private:
    string Id;
    string name;
    double math,physics,chemistry;
    public:
    void input();
    double bonus();
    double score();
    bool check_score();
    void output();
};
void Examinee::input(){
    getline(cin >> ws,Id);
    getline(cin >> ws,name);
    cin >> math >> physics >> chemistry;
}
double Examinee::bonus(){
    if (Id[2] == '1'){
        double x = 0.5;
        return x;
    }
    else if (Id[2] == '2'){
        double x = 1.0;
        return x;
    }
    else if (Id[2] == '3'){
        double x = 2.5;
        return x;
    }
}
double Examinee::score(){
    return math*2 + physics + chemistry ;
}
bool Examinee::check_score(){
    if ((score() + bonus()) >= 24){
        return true;
    }
    else{
        return false;
    }
}
void Examinee::output(){
    cout << Id  << " " << name << " " << bonus() << " " << score()  << " ";
    if (check_score()){
        cout <<  "PASSED";
    }
    else{
        cout << "FAILED";
    }
}
int main(){
    Examinee A;
    A.input();
    A.output();
}
