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


int tong(int n){
	int sum =0;
	while(n != 0){
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int res(string s){
	int p = 0;
	for (char x : s){
		p += x - '0';
	}
	return p;
}


set<int> run;

void check(){
	run.insert(9);
	for (int i=1; i<= 10000; i++){
		if(run.find(tong(i)) != run.end()){
			run.insert(i);
		}
	}
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    check();
    string s; cin >> s;
    int kq = res(s);
    if(run.find(kq) != run.end()) cout << "yes";
    else cout << "no";
}