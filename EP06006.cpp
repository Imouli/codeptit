#include<bits/stdc++.h>
#include<string.h>
#include<iomanip>
#include<string>
#include<vector>
using namespace std;

struct Student{
   string ID =  "B20DCCN";
   string name;
   string lop;
   string dob;
   float GPA;
};
void chuanhoa(string &str){
    str[0] = toupper(str[0]);
    for (int i = 1; i < str.size(); i++){
        str[i] = tolower(str[i]);
    }
}
void deleGap(string &p){
    stringstream s(p);
	string tmp;
	vector <string> v;
	while (s >> tmp){
		v.push_back(tmp);
	}
	for (int i = 0 ; i < v.size(); i++){
		chuanhoa(v[i]);
	}
	for (string x : v){
		cout << x << " ";
	}
}
void input( Student p[],int n){
	for(int i = 0; i < n; i++){
		cin.ignore();
		getline(cin,p[i].name);
		cin >> p[i].lop;
		cin >> p[i].dob;
		cin >> p[i].GPA;
	}
}
void print(Student p[],int n){
	for(int i =0 ; i < n ; i++){
		string stt = to_string(i + 1);
	while(stt.size() < 3){
		stt.insert(0,"0");
	}
	if(p[i].dob[1] == '/'){
        p[i].dob.insert(0,"0");
    }
    if(p[i].dob[4] == '/'){
        p[i].dob.insert(3,"0");
    }
	cout << p[i].ID << stt << " ";
	deleGap(p[i].name);
	cout << p[i].lop << " " << p[i].dob << " " << fixed << setprecision(2) << p[i].GPA << endl;
	}
}
int main(){
    struct Student lst[50];
    int N;
    cin >> N;
    input(lst, N);
    print(lst, N);
    return 0;
}
