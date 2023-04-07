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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    priority_queue<ll> q;
    for (int i =0 ;i < n ;i++){
    	int x; cin >> x;
    	q.push(x);
    }
    ll ans =0;
    while (q.size() > 1){
    	ll tmp1 = q.top(); q.pop();
    	ll tmp2 = q.top(); q.pop();
    	q.push(tmp1 + tmp2);
    	ans += tmp1 + tmp2;
    }
    cout << ans;
}