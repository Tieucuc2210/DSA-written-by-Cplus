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


int n ,k; int a[1000]; int ok =1;

void kt(){
	for (int i=1;i <= k ;i++){
		a[i] = 0;
	}
}


void sinh(){
	int i = n;
	while(i >= 1 && a[i] ==1 ){
		a[i] = 0;
		i--;
	}
	if(i == 0) ok =0;
	else {
		a[i] = 1;
	}
}

bool check(){
	int cnt =0 , res =0;
	for (int i =1 ;i <= n ;i++){
		if(a[i] == 1) {
			cnt++;
		} else cnt =0;

		if(cnt > res) res = cnt;
		else if(cnt == res && res == k) return false;
	}
	return res == k;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> k;
    kt();
    ok =1;
    vector<string> v1 , v2;
    
    while(ok){
    	int sum =0;
    	string tm1 = "" , tm2 = "";
    	for (int i=1;i <= n ;i++){
    		sum += a[i];
    		tm1 += to_string(a[i]);
    		tm2 += to_string(a[i]);
    	}
    	if(check()) v1.push_back(tm1);
    	if(sum == k) v2.push_back(tm2);
    	sinh();
    }
    for (auto x : v1) cout << x << " ";

    cout << endl;
    sort(v2.begin() , v2.end());
    for (auto x : v2) cout << x << " ";
}