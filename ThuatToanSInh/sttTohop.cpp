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

int n ,k; int a[1000]; int ok;

void kt(){
	for (int i=1;i <= n ;i++){
		a[i] = i;
	}
}

void sinh(){
	int i = k;
	while(i >= 1 && a[i] == n - k + i){
		i--;
	}
	if (i == 0) ok =0;
	else{
		a[i]++;
		for (int j=i +1; j <= k ;j++){
			a[j] = a[j-1] + 1;
		}
	}
}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> k;
    int x[n + 8];
    string s = "";
    for (int i =1;i <= k ;i++){
    	cin >> x[i];
    	s += to_string(x[i]);
    }
    kt();
    ok = 1;
    vector<string> v;
    while(ok){
    	string res = "";
    	for (int i =1;i <= k ; i++){
    		res += to_string(a[i]);
    	}
    	v.push_back(res);
    	sinh();
    }
    int cnt =0;
    reverse(begin(v) , end(v));
    for (auto x :v ){
    	cnt++;
    	if (s == x){
    		cout << cnt;
    		return 0;
    	}
    }
}