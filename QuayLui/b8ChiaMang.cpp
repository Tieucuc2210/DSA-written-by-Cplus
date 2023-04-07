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
bool ok;
int tong =0;
void Try(int i , int pos ,int sum , int cnt){
	if (cnt == k){
		ok = true;
		return ;
	}
	for (int j =pos ; j <= n ;j++){
		tong += a[i];
		if(tong == sum){
			Try(i +1 ,j + 1, 0, cnt +1);
		} else if (sum < tong){
			Try(i + 1 , j + 1, sum , cnt);
		}
	}
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> k;
    for (int i =1; i <= n ; i++){
    	cin >> a[i];
    	tong += a[i];

    }
    if(tong % k == 0){
    	cout << "0";
    	return 0;
    }
    tong /= k;
    Try(1 , 1 , 0 , 0);
    cout << ok;
}