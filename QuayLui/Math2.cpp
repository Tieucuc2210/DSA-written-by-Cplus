#include<bits/stdc++.h>


using namespace std;
using ll = long long;
using db = double;
#define MAX_SIZE 1e7
#define MIN_SIZE -1e7

const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+1;
inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

// nap chogn toan tu :

class sinhvien;
class giaovien;



class sinh_vien{
private:
	friend class giaovien;
	string id , ten ,ns; 
	double gpa;
	static int dem;

public:
	//sinh_vien();
	friend istream& operator >>(istream &in , sinh_vien &a);
	friend ostream& operator << (ostream &out , sinh_vien a);
	bool operator < (sinh_vien a);
	friend bool operator <(sinh_vien a , sinh_vien b);

};

bool operator<(sinh_vien a , sinh_vien b){
	return a.gpa < b.gpa;
}

bool sinh_vien::operator<(sinh_vien a){
	return this->gpa < a.gpa;
}
istream& operator >> (istream &in , sinh_vien &a){
	in >> a.id;
	cin.ignore();
	getline(in , a.ten);
	in >> a.ns;
	in >> a.gpa;
	return in;
}
ostream& operator << (ostream &out , sinh_vien a){
	cout << a.id << endl;
	cout << a.ten << endl;
	cout << a.ns << endl;
	cout << a.gpa << endl;
}




int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sinh_vien x;
    cin >> x;
    cout << x;

}