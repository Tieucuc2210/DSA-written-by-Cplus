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


int ch1(int a[] ,int n , int k){
	int res = -1;
	int l =0 , r = n-1;
	while(l <= r){
		int m = (l + r) /2;
		if(a[m] == k){
			res = m;
			r = m-1;
		} else if (a[m] < k){
			l = m +1;
		} else r = m-1;
	}
	return res;
}

int ch2(int a[] , int n , int k){
	int ans = -1;
	int l =0 , r = n-1;
	while (l <= r ){
		int m = (l + r) /2;
		if(a[m] == k){
			ans = m;
			l = l + 1;
		} else if(a[m] < k){
			l = m +1;

		} else {
			r = m -1;
		}
	}
	return ans;
}

int ch3(int a[] ,int n , int k){
	int l =0 ,r = n-1;
	int res = -1;
	while(l <= r){
		int m = (l + r) /2;
		if(a[m] >= k){
			res= m;
			r = m-1;
		} else l = m +1;
	}
	return res;
}


int ch4(int a[] ,int n , int k){
	int l =0 ,r = n-1;
	int res = -1;
	while(l <= r){
		int m = (l + r) /2;
		if(a[m] > k){
			res= m;
			r = m-1;
		} else l = m +1;
	}
	return res;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n ,k; cin >> n >> k;
    int a[n];
    for (auto &x : a){
    	cin >> x;
    }
    sort( a,a + n);
    cout << ch1(a , n , k) << endl;
    cout << ch2( a, n , k) << endl;
    cout << ch3(a , n , k) << endl;
    cout << ch4(a , n , k) << endl;


    if(ch1(a , n , k) != -1){
    	cout << ch2(a , n , k) - ch1( a, n ,k) << endl;
    } else cout << "0";

}