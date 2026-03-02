#include <bits/stdc++.h>
using namespace std;

pair<string, vector<int>> decomposition(const string &s) {
    string t = "";
    vector<int> v;
    int count = 0;
    for (char c : s) {
        if (c == 'A') {
            count++;
        } else {
            t += c;
            v.push_back(count);
            count = 0;
        }
    }
    v.push_back(count);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, t;
    if (!(cin >> s >> t)) return 0;

    auto [ss, sv] = decomposition(s);
    auto [ts, tv] = decomposition(t);

    if (ss != ts || sv.size() != tv.size()) {
        cout << -1 << "\n";
        return 0;
    }

    long long ans = 0; 
    for (int i = 0; i < (int)sv.size(); i++) {
        ans += abs(sv[i] - tv[i]);
    }
    
    cout << ans << "\n";

    return 0;
}