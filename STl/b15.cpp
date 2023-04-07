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



int check1(int a[] , int n , int b){
	int res = -1;
	int l =0 , r = n-1;
	while (l < r){
		int m = (l + r) /2;
		if(a[m] >= b){
			res = m+1;
			l = m + 1;
		} else r = m-1;
	}
	return res;
}

int check2(int a[] , int n , int b){
	int ans = -1;
	int l =0 , r= n-1;
	while (l < r){
		int m = (l + r) /2;
		if(a[m] <= b){
			ans = m+1;
			r = m - 1;
		} else l = m+1;
	}
	return ans;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int a[n];
    set<int> v;
    for (int i =0 ;i < n ;i++){
    	cin >> a[i];
    	v.insert(a[i]);
    }
    sort( a,a + n);
    int t; cin >> t;
    while(t--){
    	int a, b; cin >> a >> b;
    	if(a == 1){
    		v.insert(b);
    	} else if(a == 2){
    		if(v.find(b) != v.end()) v.erase(b);
    	} else if(a == 3){
    		//sort(a ,a + n);
    		if(check1(a , n , b) == 1) cout << "YES" << endl;
    		else cout << "NO" << endl;
    	} else if(a == 4){
    		//sort( a,a + n);
    		if(check2(a , n , b) == 1) cout << "YES" << endl;
    		else cout << "NO" << endl;
    	}
    }
}