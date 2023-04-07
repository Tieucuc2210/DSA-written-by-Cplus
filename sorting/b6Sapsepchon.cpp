/#include<bits/stdc++.h>


using namespace std;
using ll = long long;
using db = double;
#define MAX_SIZE 1e7
#define MIN_SIZE -1e7

const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+1;
inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int a[n];
    for (auto &x : a){
    	cin >> x;
    }
    for (int i =0 ;i < n -1; i++){
    	int _min = i;
    	for (int j =i + 1; j < n ;j++){
    		if (a[j] < a[_min]){
    			_min = j;
    		}
    	}
    	swap(a[i] , a[_min]);
    	cout << "Buoc " << i + 1 << ": ";
    	for (int j =0 ; j < n ;j++){
    		cout << a[j] << " ";
    	}
    }
}