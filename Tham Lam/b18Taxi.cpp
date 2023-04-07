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
    int n; cin >> n;
    int a[5] = {0};
    for (int i =0 ;i <n ;i++){
        int x; cin >> x;
        a[x]++;
    }
    /*
    Số lượng nhóm có 4 người đi taxi một chiều, cập
    nhật vào biến ans và đặt số lượng nhóm này bằng
    0 để không tính lại.
    Số lượng nhóm có 3 người đi taxi một chiều, cập nhật
    vào biến ans.
    Ghép nhóm có 1 người vào nhóm có 3 người để đi taxi
    một chiều, cập nhật lại số lượng nhóm có 1 người.
    Số lượng nhóm có 2 người được ghép thành cặp để đi
    taxi một chiều, cập nhật vào biến ans.
    Nếu còn lại một nhóm có 2 người thì ghép với 2 nhóm
    có 1 người để đi taxi một chiều, cập nhật lại số lượng nhóm có 1 người.
    Số lượng nhóm có 1 người ghép thành các cặp để 
    đi taxi một chiều, cập nhật vào biến ans.
    */
    int ans =0;
    ans += a[4];
    a[4] = 0;
    ans += a[3];
    if (a[1] > a[3]) a[1] -= a[3];
    else a[1] =0;
    ans += (a[2] + 1) /2;
    if (a[2] % 2 == 1){
        if (a[1] > 2) a[1] -= 2;
        else a[1] =0;
    }
    ans += (a[1] + 3) / 4;
    cout << ans;
}