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

int main()
{
    string s ; cin >> s;
    vector<int>v;
    for(int i = 0 ; i < s.length() ;i++)
    if(s[i] == '1')
    {
        int j = i;
        while(j + 1 < s.length() && s[j + 1] == '1')
        {
            ++j;
        }
        v.push_back(j - i + 1);
        i = j;
    }
    sort(v.begin(), v.end() , greater<int>());
    int ans = 0;
    for(int i = 0 ; i < v.size() ; i += 2)
    {
        ans += v[i];
    }
    cout << ans;
 }