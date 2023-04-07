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


bool cmp(string a , string b){
    if(a.size() == b.size()) {
        return a< b;
    } 
    return a.size() < b.size();
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s; cin >> s;
    string res = "";
    vector<string> ok;
    int sum = 0;
    for (int i =0 ; i < s.size() ; i++){
        if (isdigit(s[i])){
            res += s[i];

        } else {
            while(res.size() > 1 && res[0] == '0'){
                res.erase(0 , 1);
            }
            if(res != "") ok.push_back(res);
            res = "";
        }

    }
    sort(ok.begin() , ok.end() , cmp);
    cout << ok[ok.size() - 1];
}
