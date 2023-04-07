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

int n , k; int a[1000] , res[1000];

vector<string> ok;
void Try(int pos , int sum , int i){
	if(sum == k){
		string tm = "";
		tm += "{";
		for (int j = 0 ; j < i ;j++){
			tm += to_string(res[j]);
			if(j != i-1) tm += " ";
			else tm += "}";
		}
		ok.push_back(tm);
	}
	for (int j =pos ; j <= n ;j++){
		if(sum + a[j] <= k){
			res[i] = a[j];
			Try(j , sum + a[j], i+1);
		}
	}
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> k;
    for (int i = 1;i <= n ;i++){
    	cin >> a[i];
    }
    sort( a+ 1 , a + n + 1);
    Try(1 , 0 , 0);
    if(ok.size() == 0){
    	cout << "-1";
    	return 0;
    } 
    cout << ok.size() << endl;
    for (auto x : ok){
    		cout << x << endl;
   	}
    }
