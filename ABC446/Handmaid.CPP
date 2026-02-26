#include<bits/stdc++.h>
using namespace std;

void solve(string s){
    if(!s.empty()){
        s[0] = tolower((unsigned char)s[0]);
    }
    cout <<"Of" << s << "\n";
}

int main(){
    string s; cin >> s;

    solve(s);

    return 0;
}