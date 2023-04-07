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


struct sss
{
	string s , ht;
	void in(){
		cout << ht << " ";
	}
};




int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    set<sss> v; 

    for (int i =0 ;i < n ;i++){
    	sss x;
    	cin >> x.s;
    	cin.ignore();
    	getline(cin ,x.ht);
    	v.insert(x.ht);
    }
    int t; cin >> t;
    while(t--){
    	string s; cin >> s;
    	if(v.find(s) != v.end()) cout
    	else cout << "not "; 
    }
}