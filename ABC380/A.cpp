#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    int oneCount = 0;
    int twoCount = 0;
    int threeCount = 0;
    for(int i = 0, n = s.size(); i < n; i++)
    {
        if(s[i] == '1')
        {
            oneCount++;
        }
        if(s[i] == '2')
        {
            twoCount++;
        }
        if(s[i] == '3')
        {
            threeCount++;
        }
    }
    if(oneCount == 1 && twoCount == 2 && threeCount == 3)
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