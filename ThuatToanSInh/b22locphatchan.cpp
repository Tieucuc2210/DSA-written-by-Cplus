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


int n , a[10000] ,ok;
string s;
void sinh(){
	int i = s.size() -1;
	while(i >= 0 && s[i] == '8'){
		s[i] ='6';
		i--;
	}
	if(i == -1) ok =0;
	else{
		s[i] ='8';
	}
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    vector<string> ans;
    for (int i = 1;i <= 15; i++){
    	s = string(i , '6');
    	ok =1;
    	while(ok){
    		string t =s;
    		reverse(begin(t) ,end(t));
    		ans.push_back(s + t);
    		sinh();
    	}
    }
    ll res =0;
    for (auto x : ans){
    	res++;
    	cout << x << " ";
    	if(res == n) break;
    }
}