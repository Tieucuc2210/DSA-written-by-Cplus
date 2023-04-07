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


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s; getline(cin , s);
    stringstream ss(s);
    string wok;
    map<string , int> bb;
    vector<string> v;
    while(ss >> wok){
    	bb[wok]++;
        
    }
    string t1 , t2; int kl1 =0 , kl2 = INT_MAX;
    for (auto x : bb){
        if(x.second > kl1){
            kl1 = x.second;
            t1 = x.first;
        }
        if(x.second <= kl2){
            kl2 = x.second;
            t2 = x.first;
        }
    }
    cout << t1 << " " << kl1;
    cout << endl;
    cout << t2 << " " << kl2;
}