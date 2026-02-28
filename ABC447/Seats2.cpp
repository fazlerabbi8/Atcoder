// #include<bits/stdc++.h>
// using namespace std;

// void solve(int N, int M){
//     if(N % M >= 2){
//         cout << "YES" << "\n";
//     }else{
//         cout << "NO" << "\n";
//     }
// }

// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int N, M;
//     cin >> N >> M;

//     solve(N, M);

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    int maxPeople = (N + 1) / 2;

    if (M <= maxPeople)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}