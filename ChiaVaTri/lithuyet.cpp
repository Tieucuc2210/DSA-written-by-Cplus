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




ll pow1(ll n , ll k){
    ll res =1;
    while(k){
        if (k % 2 == 1){
            res *= n;
            res %= MOD;
        }
        n *= n;
        n %= MOD;
        k /= 2;
    }
    return res;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n ,k; cin >> n >> k;
    cout << pow1(n ,k);
}