/*#include<bits/stdc++.h>


using namespace std;
using ll = long long;
using db = double;
#define MAX_SIZE 1e7
#define MIN_SIZE -1e7

const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+1;
inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

int n;
string s; int a[10000]; int ok =1;


void kt(){
	s = string(n , 'B');
}

void sinh(){
	int i = s.size() -1;
	while(i >= 0 && s[i] == 'A'){
		s[i] = 'B';
		i--;
	}
	if(i == -1) ok =0;
	else {
		s[i] ='A';
	} 
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    kt();
    ok =1;
    while(ok){
    	cout << s << endl;
    	sinh();
    }
}*/

#include <bits/stdc++.h>
using namespace std;

int a[1001] , n , ok;

void ktao()
{
    for(int i = 1 ;i <= n ;i++)
    {
        a[i] = 0;
    }
}
void sinh()
{
    int i = n ;
    while(i >= 0 && a[i] == 1)
    {
        a[i] = 0; --i;
    }
    
    if(i == 0) ok = 0;
    else
    {
        a[i] = 1;
    }
}
int main()
{
    cin  >> n;
    ok = 1;
    ktao();
    while(ok == 1)
    {
        for(int i = 1 ; i <= n ; i++)
        {
            if(a[i] == 0) cout << "B";
            else cout << "A";
        }
        cout << endl;
        sinh();
    }
    return 0;
}