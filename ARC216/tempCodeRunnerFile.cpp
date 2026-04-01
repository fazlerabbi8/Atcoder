#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    string A, B;

    cin >> A;
    cin >> B;

    if (A == B)
    {
        cout << 0 << "\n";
        return;
    }

    int countZero = 0;
    int countOne = 0;

    for (char c : A)
    {
        if (c == '0')
        {
            countZero++;
        }
    }

    for (char c : B)
    {
        if (c == '1')
        {
            countOne++;
        }
    }

    if (countZero == countOne)
    {
        cout << min(countOne, countZero) << "\n";
    }
    else
    {
        cout << -1 << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}