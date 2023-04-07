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
    int n; cin >> n;
    for (int i = n / 7; i >= 0 ; i--){
    	int tmp = n - i * 7;
    	if (tmp % 4 == 0){
    		cout << string(tmp /4 , '4') << " " << string(i , '7');
    		return 0;
    	}
    }
    cout << "-1";
}