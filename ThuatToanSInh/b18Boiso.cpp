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


string s; int a[1000]; int ok;

ll res[500];

void sinh(){
	int i = s.size() -1;
	while (i >= 0 && s[i] == '8'){
		s[i] = '0';
		i--;
	}
	if(i == -1) ok =0;
	else {
		s[i] = '8';
	}
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    s= "0000000000000000000";
    ok  =1;
    vector<string> ans;
    while(ok){
    	ans.push_back(s);
    	sinh();
    }
    for (int i =1;i <= 500 ;i++){
    	for (auto x : ans){
    		ll tm = stoll(x);
    		if (tm != 0 && tm % i == 0){
    			res[i] = tm;
    			break;
    		}
    	}
    }
    int t; cin >> t;
    while(t--){
    	int n; cin >> n;
    	cout << res[n] << endl;
    }
}