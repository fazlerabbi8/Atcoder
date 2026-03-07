#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(vector<ll> &arr, ll n, ll X)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < X)
        {
            X = arr[i];
            cout << 1 << "\n";
        }
        else if (arr[i] >= X)
        {
            cout << 0 << "\n";
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, X;
    cin >> n >> X;

    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    solve(arr, n, X);

    return 0;
}