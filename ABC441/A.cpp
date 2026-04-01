#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int P, Q, X, Y;
    cin >> P >> Q;
    cin >> X >> Y;

    if ((P <= X) && (X < P + 100) && (Q <= Y) && (Y < Q + 100))
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