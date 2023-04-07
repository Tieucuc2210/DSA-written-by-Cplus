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
	if(n == 0) return 0;
	int tm = n % 10;
	if(tm % 2 == 0) return n % 10 + tong(n/10);
	else tong(n/10);
}

int chan(int n){
	if(n == 0) return 0;
	int tm2 = n % 10;
	if(tm2 % 2 == 1) return n % 10 + chan(n/10);
	else chan(n/10);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n; cin >> n;
    cout << tong(n) << " " << chan(n);
}