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

void res(string &s){
    for (auto &x : s){
        x = toupper(x);
    }
}

void ch(string &s){
	s[0] = toupper(s[0]);
	for (int i =1; i <= s.size() ; i++){
		s[i] = tolower(s[i]);
	}
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s; getline(cin ,s );
    //string ns; cin >> ns;
    stringstream ss(s);
    string wok;
    vector<string> v;
    while(ss >> wok){
    	v.push_back(wok);
    }
    for (int i =0; i < v.size() - 1; i++){
    	ch(v[i]);
        cout << v[i] << " ";
    	if(i != v.size() -2) cout << " ";
        else cout  << " ,";
    }
    res(v[v.size()-1]);
    cout << v[v.size() -1];

    cout << endl;
    res(v[v.size()-1]);
    cout << v[v.size() -1] << ", ";
    for (int i =0; i < v.size() - 1; i++){
        ch(v[i]);
        cout << v[i] << " ";
    }
}