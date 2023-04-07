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


int n ,k; int a[1000]; int res[1000];
void Try(int sum , int pos , int cnt){
	if(sum == k){
		cout << "[";
		for (int i = 1;i < cnt ; i++){
			cout << res[i];
			if(i != cnt -1) cout << " ";
			else cout << "]";
		}
		cout << endl;
	}
	for (int j =pos ; j <= n;j++){
		res[cnt] = a[j];
		if (sum + j <= k){
			Try(sum + a[j] , j + 1, cnt+1);
		}
	}
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> k;
    for (int i =1;i <= k ;i++){
    	cin >> a[i];
    }
    sort( a, a+n);
    Try(0 , 1 , 1);
}