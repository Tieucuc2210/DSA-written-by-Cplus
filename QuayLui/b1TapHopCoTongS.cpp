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


int n , a[100][100];
void Try(int i , int j , string s){
	if (i == 1 && j == 1){
		cout << s << endl;
	}
	if(i+1 <= n && a[i+1][j]){
		Try(i + 1, j , s + "D");
	}
	if (j +1 <= n && a[i][j+1]){
		Try(i , j + 1, s + "R");
	}
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> k >> s;
    res = 0;
    Try(0  , 1 , 0);
    cout << res;
}