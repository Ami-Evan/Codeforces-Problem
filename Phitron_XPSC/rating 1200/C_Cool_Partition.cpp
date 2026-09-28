#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
typedef long long ll;

void solve() {
    int n; cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++){
      cin>>v[i];
    }
    int ans=0;
    set<int>cur,seen;
    for(int i=0; i<n; i++){
      cur.insert(v[i]);
      seen.insert(v[i]);
      if(cur.size()==seen.size()){
        ans++;
        seen.clear();
      }
    }
    cout<<ans<<endl;
}

int main() {
    fastio();
    int t; cin >> t;
    while(t--) solve();
    return 0;
}