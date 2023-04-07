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



bool check(ll a[] , ll n , ll k , ll sum){
	ll pos = 0 , cnt =0;
	for (int i =0 ;i < n ;i++){
		pos += a[i];
		if (pos > sum){
			cnt++;
			pos = a[i];
		}
	}
	cnt++;
	return cnt <= k;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n ,k; cin >> n >> k;
    ll a[n];
    ll sum =0; ll pp = 0;
    for (int i =0 ;i < n ;i++){
    	cin >> a[i];
    	sum += a[i];
    	pp = max(pp , a[i]);
    }
    ll l = pp; ll r = sum; int  res =0;
    while(l < r){
    	int m = (l + r) / 2;
    	if(check(a , n , k , m)){
    		res = m;
    		r = m  -1;
    	} else l = m+1;
    }
    cout << res;
}