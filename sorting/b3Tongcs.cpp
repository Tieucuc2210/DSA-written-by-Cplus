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


int tong(ll n){
    int sum = 0;
    while (n != 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

bool cmp(ll a, ll b){
	if(tong(a) == tong(b)){
        return a < b;
    }
    return tong(a) < tong(b);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n; cin >> n;
    ll a[n];
    for (auto &x :a ){
    	cin >> x;
    }
    sort(a ,a + n , cmp);
    for (auto x : a){
    	cout << x << " ";
    }
}