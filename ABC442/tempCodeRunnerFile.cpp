#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    int count = 0;
    bool end = false;
    for(int i = 0, n = s.length(); i < n; i++){
        if(s[i] == 'i' || s[i] == 'j'){
            count++;
            end = true;
        }
    }
    if(end){
        cout << count << "\n";
    }else{
        cout << 0 << "\n";
    }
}
int main()
{
    solve();

    return 0;
}