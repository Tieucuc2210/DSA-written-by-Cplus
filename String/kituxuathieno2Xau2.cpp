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
    string s1 ,s2; cin >> s1 >> s2;
    set<char> c1, c2 ,c3;
    for (auto x : s1){
    	c1.insert(x);
    	//c3.insert(x);
    }

    for (auto x : s2){
    	c2.insert(x);
    	//c3.insert(x);
    }
    for (auto x : c1){
        if(c2.find(x) == c2.end()){
            cout << x;
        }

    }
    cout << endl;
    for (auto x : c2){
        if(c1.find(x) == c1.end()){
            cout << x;
        }
    }
}
