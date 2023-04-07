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
    int n ,m; cin >> n >> m;
    set<int> v1 ,v2;
    int a[n] , b[m];
    vector<int> res;
    for (auto &x : a){
        cin >> x;
        v1.insert(x);
    }
    for (auto &x : b){
        cin >> x;
        v2.insert(x);
    }
    for (auto x : v1){
        if(v2.find(x) == v2.end()){
            cout << x << " ";
        }
    }
    for (auto x : v2){
        if(v1.find(x) == v1.end()){
            cout << x << " ";
        }
    }
   
}