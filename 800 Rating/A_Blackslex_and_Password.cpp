#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
typedef long long ll;

void solve() {
    int k,x; cin>>k>>x;
    int ans=k*x;
    cout<<ans+1<<'\n';
}

int main() {
    fastio();
    int t; cin >> t;
    while(t--) solve();
    return 0;
}