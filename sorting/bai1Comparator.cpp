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

map<string,int> ba;
bool cmp1(string a, string b){
	if(a.size() == b.size()){
		return a < b;
	}
	return a.size() < b.size();
}

bool cmp2(string a, string b){
	if(ba[a] != ba[b]){
		return ba[a] > ba[b];
	}
	return a < b;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    string a[n];
    for (int i =0 ;i < n ;i++){
    	cin >> a[i];
    	ba[a[i]]++;
    }
    sort( a,a + n);
    for (string x : a){
    	cout << x << " ";
    }
    cout << endl;
    sort( a, a + n , greater<string> ());
    for (string x : a){
    	cout << x << " ";
    }
    cout << endl;
    sort( a,a + n , cmp1);
    for (auto x : a){
    	cout << x << " ";
    }
    cout << endl;
    sort(a ,a + n , cmp2);
    for (auto x : a){
    	cout << x << " ";
    }
}