#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(int d)
{
    double area = M_PI * d * d / 4.0;
    cout << fixed << setprecision(10) << area << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int d;
    cin >> d;

    solve(d);

    return 0;
}