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
    string res = "";
    string kq = string(1 , s[0]);
    res += s[0];
    int cnt =1; int r =1;
    for (int i=1 ; i < s.size(); i++){
    	if (s[i] != s[i-1]){
    		res += s[i];
    		cnt++;
    	} else res =s[i] , cnt =1;

    	if(cnt > r){
    		r = cnt;
    		kq = res;
    	} else if (cnt == r){
    		kq = max(kq ,res);
    	}
    }
    cout << kq << endl;
}
