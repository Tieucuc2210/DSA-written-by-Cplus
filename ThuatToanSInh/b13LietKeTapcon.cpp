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
    vector<string> v;
    for (int i =1; i < pow(2 , n) ; i++){
    	string tm = "";
    	for (int j =0 ;j < n ;j++){
    		if (i & (1 << j)){
    			tm += to_string(j +1) + " ";
    		}
    	}
    	v.push_back(tm);
    }
    sort(begin(v) , end(v));
    for (auto x : v) cout << x << endl;
}