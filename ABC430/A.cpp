#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    if ((A <= C) && (B > D))
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
}