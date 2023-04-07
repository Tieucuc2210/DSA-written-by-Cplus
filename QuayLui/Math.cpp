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

//encapsulation : dong goi
// access modifier :
// - private , public , protected
// constructor();

class ten_class{
private: // xay dung thuoc tinh
	string id , ten ,ns; // dam bao tinh dong goi :
	double gpa;
	static int dem;
// xay dung phuong thuc
public:
	//ten_class(); // constructor :
	//ten_class(string , string ,string , double);
	void nhap();
	void in();
	double isGpa();
	void tangDem();
	int getDem();
	friend void inthongtin(ten_class);

};

// xay dung ben ngoai

/*ten_class::ten_class(){
	cout << "ham khoi tao dc goi";
}*/
/*ten_class::ten_class(string ma , string name , string bd , db z){
	id = ma;
	ten = name;
	ns = bd;
	gpa = z;	
}*/



/*double ten_class::isGpa(){
	return this->gpa;
} ham sap xep ::
bool cmp(ten_class a, ten_class b){
	return a.isGpa() < b.isGpa();
}*/



/*void ten_class::dfsGpa(){
	this->gpa = gpa;
}*/


int ten_class::dem = 0;

void ten_class::tangDem(){
	dem++;
}
int ten_class::getDem(){
	return dem;
}
void ten_class::nhap(){
	dem++;
	cin >> this->id;
	cin.ignore();
	getline(cin , this->ten);
	cin >> this->ns;
	cin >> this->gpa;
}

//-- nhap xuat :

void ten_class::in(){
	cout << id << endl;
	cout << ten << endl;
	cout << ns << endl;
	cout << gpa << endl;
}

void inthongtin(ten_class a){ // ham ban : co the truy cap vao cac phuong thuc :
	cout << a.id << " "  << a.ten;
}


class giaovien{
private:
	string ht , ns;
public:
	void uplate(sinh_vien&);
};

void giaovien::uplate(sinh_vien& a){
	a.gpa = 5.34;
}
int main(){
	ten_class x;
	x.nhap();
	inthongtin(x);
	/*int n; cin >> n;
	ten_class x[100];
	for(int i=0;i <n ;i++){
		x[i].nhap();
	}
	sort( x , x + n , cmp);
	for (int i =0;i < n;i++){
		 x[i].in();
	}*/



	/*ten_class x;
	x.tangDem();
	x.tangDem();
	ten_class z;
	cout << z.getDem() << endl;*/
	
}