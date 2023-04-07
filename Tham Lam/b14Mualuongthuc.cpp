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
    int n , s, m; cin >> n >> s >> m;
    /*
    Dòng lệnh này kiểm tra xem có đủ lương thực để 
    tồn tại trong S ngày không. Vì cửa hàng chỉ đóng
    cửa vào ngày chủ nhật, nên số ngày hiệu quả cần tính 
    là S - S/7 (số ngày trong S ngày không phải ngày chủ nhật).
    Nếu lượng lương thực mua được trong ngày nhân với số ngày hiệu
    quả đó không đủ để tồn tại trong S ngày, 
    chương trình sẽ in ra "-1" và kết thúc chương trình.
    */
    if (n * (s - s/7) < m * s) cout << "-1";
    for (int i =0 ; i <= s - s/ 7 ; i++){
    	if (n * i >= s * m){
    		cout << i << endl;
    		return 0;
    	}
    }
    /*
    Dòng lệnh này sẽ chạy vòng lặp từ 0 đến số ngày hiệu quả
    cần tính (S - S/7). Trong mỗi vòng lặp, chương trình sẽ
    kiểm tra xem số lượng lương thực có thể mua được trong i ngày có đủ
    để tồn tại trong S ngày không (bằng cách nhân số lượng lương thực mua được
    trong một ngày với số ngày i, rồi so sánh với S * M). Nếu đủ, chương trình
    sẽ in ra số ngày i đó và kết thúc chương trình. Nếu không đủ, chương trình
    sẽ tiếp tục vòng lặp. Nếu tất cả các giá trị trong vòng lặp đều 
    không đủ, chương trình sẽ in ra "-1" và kết thúc chương trình.
    */
    cout << "-1";
}