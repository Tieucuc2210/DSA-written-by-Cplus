//Chuyển hệ thập phân sang hệ 16.


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



string tmp = "0123456789ABCDEF";

void in(int n){
    if (n == 0){
        return ;
    }
    int res = n % 16;
    in(n /16);
    cout << tmp[res];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    if (n == 0) cout << "0";
    else in(n);
}