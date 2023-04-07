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


bool ok = 0;
int n ,k , a[1000];
int res = MAX_SIZE;

void Try(int pos , int sum ,int cnt){
	if(sum == k){
		ok= 1;
		res = min(res , cnt);
	}
	for (int j= pos ; j <= n ;j++){
		if(sum + a[j] <= k){
			Try(j + 1 , sum + a[j] , cnt +1);
		}
	}

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> k;
    for (int i =1;i <= n ;i++){
    	cin >>a[i];
    }
    Try(1 , 0 , 0);
    if(!ok) cout << "0";
    else{
    	cout << res;
    }
}