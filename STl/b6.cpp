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
    string s; cin >> s;
    map<char,int> v;
    set<int> v1;
    for (auto x : s){
    	v[x]++;
    	v1.insert(x);
    }
    char ok1 , ok2; int kl1 =0 , kl2 = INT_MAX;
    for (auto x : v){
    	if(x.second > kl1){
    		kl1 = x.second;
    		ok1 = x.first;
    	}
    	if(x.second <= kl2){
    		kl2 = x.second;
    		ok2 = x.first;
    	}
    }
    cout << ok1 << " " << kl1;
    cout << endl;
    cout << ok2 << " " << kl2;
    cout << endl;
    cout << v1.size();
}