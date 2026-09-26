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
    bool ok=false;
   set<int>s;
    for(int i=n-1; i>=0; i--){
      if(s.count(v[i])){
        cout<<i+1<<endl;
        ok=true;
        return;
      }
      s.insert(v[i]);
    }
    if(!ok) cout<<0<<endl;
}

int main() {
    fastio();
    int t; cin >> t;
    while(t--) solve();
    return 0;
}