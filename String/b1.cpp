// Cho một xâu kí tự, hãy đếm tần suất xuất hiện của các kí tự trong xâu và in ra theo yêu cầu.
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
    map<char ,int> v;
    for (auto x : s){
    	v[x]++;
    	
    }
    for (auto x : v){
    		cout << x.first << " " << x.second << endl;
    }
    cout << endl;
    for (auto x : s){
    	if(v[x] != 0){
    		cout << x << " " << v[x] << endl;
    	}
    	v[x] = 0;
    }
}
