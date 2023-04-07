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


bool check(string s){
	int sum =0;
	for (int i=0 ; i < s.size() ; i++){
		sum = sum * 10 + (s[i] - '0');
		sum %= 25;
	}
	if(sum == 0) return true;
	else return false;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s; cin >> s;
    if(check(s)) cout << "yes";
    else cout << "0";
}