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
    int a[n];
    set<int> v;
    vector<int> ok;
    for (auto &x : a){
    	cin >> x;
    	v.insert(x);
    	
    }
    //vector<int> ok;
    int t; cin >> t;
    while(t--){
    	int a,b; cin >> a >> b;
    	if(a == 1){
    		v.insert(b);
    	} else if(a == 2){
    		if(v.find(b) != v.end()) {
    			v.erase(b);
    		}
    	} else if(a == 3){
    		if(v.find(b) != v.end()) cout << "YES" << endl;
    		else cout << "NO" << endl;
    	}
    }
}