#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        set<int> s;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            s.insert(x);  // O(log n) per insert, removes duplicates
        }
        
        int longest = 1, current = 1;
        int prev = *s.begin();
        
        for (auto it = next(s.begin()); it != s.end(); it++) {
            if (*it == prev + 1) {
                current++;
                longest = max(longest, current);
            } else {
                current = 1;
            }
            prev = *it;
        }
        
        cout << longest << "\n";
    }
    
    return 0;
}