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


bool check(int a[] , int n){
	int c = 0 , l =0;
	for (int i =0 ;i <n ;i++){
		if (a[i] % 2 == 1) l++;
		else c++;
	}
	if (c% 2== 0) return true;
	for (int i =0 ;i < n ;i++){
		for (int j =i + 1; j < n ;i++){
			if (abs(a[i] - a[j]) == 1){
				return true;
			}
		}
	}
	return false;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int a[n];
    for (auto &x : a){
    	cin >> x;
    }
    if (check(a , n)){
    	cout << "yes";

    } else{
    	cout << "No";
    }
}