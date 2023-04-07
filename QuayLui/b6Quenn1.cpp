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
int res[1000];
int n , a[1000]; int xuoi[1000+1] , nguoc[1000+1] , cot[1000+1];
int cnt =0;
void Try(int i){
	for (int j = 1;j <= n ;j++){
		if(!cot[j] && !xuoi[n-j +i] && !nguoc[i + j -1]){
			cot[j] = xuoi[n-j +i] = nguoc[i +j -1] =1;
			res[i] = j;
			if(i == n){
				cnt++;
			} else {
				Try(i +1);
			}
			cot[j] = xuoi[n-j +i] = nguoc[i +j -1] =0;
		}
	}
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    Try(1);
    cout << cnt;
}