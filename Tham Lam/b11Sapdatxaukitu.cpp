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
    int k; cin >> k;
    string s; cin >> s;
    map<char,int> v;
    for (auto x : s){
    	v[x]++;
    }
    priority_queue<int> q;
    for (auto x : v){
    	q.push(x.second);
    }
    while  (!q.empty() && k--){
    	int tmp = q.top(); q.pop();
    	tmp--;
    	if (tmp > 0) q.push(tmp);
    }
    ll ans  =0;
    while(!q.empty()){
    	ans += q.top() * q.top();
    	q.pop();
    }
    cout << ans << endl;
}