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


bool ch1(string s){
	char v = s[0];
	for (char x : s){
		if(x < v) return false;
		v = x;
	}
	return true;
}

bool ch2(string s){
	char g = s[0];
	for (char x : s){
		if(x > g) return false;
		g = x;
	}
	return true;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s; cin >> s;
    if(ch1(s) || ch2(s)) cout << "1";
    else cout << "0";
}