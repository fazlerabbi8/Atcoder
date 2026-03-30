#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    int len = s.length();
    if (len == 5 || len % 5 == 0)
    {
        cout << "Yes" << "\n";
    }
    else
    {
        cout << "No" << "\n";
    }
}
int main()
{
    solve();

    return 0;
}