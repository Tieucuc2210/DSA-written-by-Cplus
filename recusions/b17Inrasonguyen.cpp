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


void in1(int n){
	if(n < 10){
		cout << n << " ";
		return ;
	}
	in1(n/10);
	cout << n % 10 << " ";
}


void in2(int n){
	if(n < 10){
		cout << n << " ";
		return ;
	}
	cout << n % 10 << " ";
	in2(n/10);
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n; cin >> n;
    in1(n);
    cout << endl;
    in2(n);
}