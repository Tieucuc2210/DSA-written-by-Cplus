#include<bits/stdc++.h>
//Đếm số loại ký tự trong xâu.


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
    int c1 =0 , c2 =0;
    for (auto x : s){
        if(isdigit(x)) c1++;
        else if(isalpha(x))  c2++;

    }
    if (i != )
    cout << c1 << " " << c2 <<  " " << s.size() - c1 -c2;
}