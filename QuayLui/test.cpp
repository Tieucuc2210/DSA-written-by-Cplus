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

int check(int n){
    int sum =1;
    for (int i =2;i <= sqrt(n);i++){
        if(n % i == 0) {
            if(i != n /i) sum += i + n /i;
            else sum += i;
        }
    }
    if(sum == n) return 1;
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n; cin >> n;
    if(check(n)) cout << "YES";
    else cout << "NO";
}