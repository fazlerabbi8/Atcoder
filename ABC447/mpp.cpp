#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    map<char, int> mp;

    for (auto character : s)
    {
        mp[character]++;
    }

    set<char> charSet;
    int maxFrequency = 0;

    for (auto it : mp)
    {
        char character = it.first;
        int f = it.second;

        if (f > maxFrequency)
        {
            charSet.clear();
            maxFrequency = f;
            charSet.insert(character);
        }
        else if (f == maxFrequency)
        {
            charSet.insert(character);
        }
    }

    for (auto character : s)
    {
        if (charSet.find(character) != charSet.end())
        {
            cout << character;
        }
    }
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}