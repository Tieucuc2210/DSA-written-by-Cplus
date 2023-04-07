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
    map<int,int> v;
    for (int i =0 ;i < s.size() ; i++){
    	v[s[i]]++;
    }
    int dem =0;
    for (auto x : v){
    	if (x.second % 2 == 1) dem++;
    }
    if (dem <= 1) cout << 1;
    else{
    	if (dem % 2 == 0) cout << 1;
    	else cout << 2;
    }
}
