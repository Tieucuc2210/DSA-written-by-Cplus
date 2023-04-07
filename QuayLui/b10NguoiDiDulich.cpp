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


int n, a[100][100] , res[1000];
int sum =0; int ans =INT_MAX;
bool used[1000];

void Try(int i){
	for (int j =2; j <= n ;j++){
		if(used[j] == 0){
			res[i] = j;
			used[j] =1;
			sum += a[res[i-1]][res[i]];
			if(i == n){
				ans = min(ans , sum + a[res[i][1]]);
			} else{
				Try(i+1);
			}
		}
	}
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

}