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



bool cmp(string a , string b)
{
    return a + b > b + a;
}
int main()
{
    string s ; cin >>s;
    s += "a";
    vector<string>v;
    string tmp = "";
    for(int i = 0 ; i < s.length() ; i++)
    {
        if(isdigit(s[i]))
        {
            tmp += s[i];
        }
        else
        {
            while(tmp.length() > 1 && tmp[0] == '0')
            {
                tmp.erase(0 , 1);
            }
            if(tmp != "") v.push_back(tmp);
            tmp = "";
        }
    }
    sort(v.begin() , v.end() , cmp);
    for(string x : v) cout << x;
}