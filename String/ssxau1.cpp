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



bool cmp(string a , string b){
	if(a.size() == b.size()){
		return a < b;
	}
	return a.size() < b.size();
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s; getline(cin , s);
    stringstream ss(s);
    string wok;
    vector<string> v;
    while(ss >> wok){
    	v.push_back(wok);
    }
    sort(v.begin() , v.end());
    for (auto x : v){
    	cout << x << " ";
    }
    cout << endl;
    sort(v.begin() , v.end() ,cmp);
    for (auto x : v){
    	cout << x << " ";
    }
}