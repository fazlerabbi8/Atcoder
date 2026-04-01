#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> C(n, vector<int>(n, 0));
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            cin >> C[i][j];

    bool found = false;
    for (int a = 0; a < n && !found; a++)
        for (int b = a + 1; b < n && !found; b++)
            for (int c = b + 1; c < n && !found; c++)
                if (C[a][b] + C[b][c] < C[a][c])
                    found = true;

    cout << (found ? "Yes" : "No") << endl;
    return 0;
}