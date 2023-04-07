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
    string s; getline(cin , s);
    stringstream ss(s);
    vector<string> v;
    string wok;
    set<string> l;
    map<string,int> d;
    while(ss >> wok){
    	l.insert(wok);
    	d[wok]++;
    	v.push_back(wok);
    }
    for (auto x : l){
    	cout << x << " ";
    }
    cout << endl;
    for (auto x : v){
    	if(d[x] != 0){
    		cout << x << " ";
    	}
    	d[x] = 0;
    }
}