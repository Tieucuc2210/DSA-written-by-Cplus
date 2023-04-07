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


int s=0 , n , a[100][100];
int xuoi[1000] , nguoc[1000] , cot[1000];
int res =0;
int check[1000];
void Try(int i){
	for (int j = 1; j <= n ;j++){
		if (!cot[j] && !xuoi[n- j + i] && !nguoc[i + j -1]){
			
			cot[j] = xuoi[n-j +i] = nguoc[i + j -1] =1;
			s += a[i][j];
			if(i == n){
				res = max(res , s);
			} else {
				Try(i +1);
				
			}
			s -= a[i][j];
			cot[j] = xuoi[n-j +i] = nguoc[i +j -1] =0;
		}
	}
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    n =8;
    for (int i =1;i <= 8 ;i++){
    	for (int j =1;j <= 8 ;j++){
    		cin >> a[i][j];
    	}
    }
    Try(1);
    cout << res;
}