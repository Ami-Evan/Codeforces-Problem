#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
typedef long long ll;

void solve() {
    
    string s; cin>>s;
    int n=s.size();
    if(s[0]!=s[n-1]){
      if(s[0]=='a'){
        s[0]='b';
      }
      else{
        s[0]='a';
      }
    }
    cout<<s<<'\n';
}

int main() {
    fastio();
    int t; cin >> t;
    while(t--) solve();
    return 0;
}