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
    for(int i = 0 ;i < s.length() - 2 ; i++)
    {
        if(s.size() < 3) break;
        if(s[i] == '1' && s[i + 1] == '1' && s[i + 2] == '1')
        {
            s.erase(i , 3);
            --i;
        }
    }
    if(s.size() == 0) cout << "EMPTY";
    else cout << s;
    return 0;
}