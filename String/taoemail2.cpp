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


void th(string &s){
	for (auto &x : s){
		x = tolower(x);
	}
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    cin.ignore();
    map<string,int> mp;
    while(t--){
    	string s; getline(cin ,s);
    	int id;
    	for (int i =0 ; i < s.length() ; i++){
    		if(isdigit(s[i])){
    			id = i;
    			break;
    		}
    	}
    	string ns = s.substr(id , 10);
    	string name = s.substr(0 , s.length() - 10 - 1);

    	th(name);
    	stringstream ss(name);
    	string wok;
    	vector<string> run;
    	while(ss >> wok){
    		run.push_back(wok);
    	}
        string res = "";
    	res += run[run.size() - 1];
    	for (int i=0 ; i < run.size() -1 ; i++){
    		res +=  run[i][0];
    	}
        mp[res]++;
        if(mp[res] != 1) res += to_string(mp[res]);
    	res += "@xyz.edu.vn";
    	cout << endl;
    	string mk = "";
    	mk += to_string(stoi(ns.substr(0 ,2)));
    	mk += to_string(stoi(ns.substr(3 ,2)));
    	mk += to_string(stoi(ns.substr(6 ,4)));
    	cout << res << endl << mk << endl;
    }
}