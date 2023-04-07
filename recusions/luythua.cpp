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



int pon(int a , int b){
	if(b == 0) return 1;
	int p = pon(a , b / 2);
	if(b % 2 == 1) return p * p * a;
	else return p *p;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a , b; cin >> a >> b;
    cout << pon(a , b);
}


