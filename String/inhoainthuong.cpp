#include <bits/stdc++.h>
using namespace std;

void chuyenHoa(string &s)
{
    for(int i = 0 ; i < s.length() ; i++)
    {
        s[i] = toupper(s[i]);
    }
}

void c1(string &s){
    s[0] = toupper(s[0]);
    for (int i=1; i <= s.size() ; i++){
        s[i] = tolower(s[i]);
    }
}


void chuyenThuong(string &s)
{
    for(int i = 0 ; i < s.length() ; i++)
    {
        s[i] = tolower(s[i]);
    }
}
int main()
{
    string s ; getline(cin , s);
    chuyenHoa(s); cout << s << endl;
    chuyenThuong(s) ; cout << s;
    //return 0;
}
