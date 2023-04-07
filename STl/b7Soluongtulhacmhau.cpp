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
	return a <b;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    set<string> v;
    vector<string> ans;
    string s; getline(cin , s);
    stringstream ss(s);
    string wok;
    while(ss >> wok){
    	v.insert(wok);
    }
    for (auto x : v){
    	ans.push_back(x);
    }
    cout << ans.size();
    cout << endl;
    sort(ans.begin() , ans.end() , cmp);
    cout << ans[0] << " " << ans[ans.size() - 1];
}