#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
typedef long long ll;

void solve() {
    int n,c; cin>>n>>c;
    vector<int>v(n),v1(n);
    for(int i=0; i<n; i++){
      cin>>v[i];
    }
    for(int i=0; i<n; i++){
      cin>>v1[i];
    }
    int ans=0;
    bool ok=false;
    for(int i=0; i<n; i++){
      if(v[i]<v1[i]){
        ok=true;
      }
        ans+=v[i];
        ans-=v1[i];
      
    }
    if(ok){
      ok=false;
      ans+=c;
    sort(v.begin(),v.end());
    sort(v1.begin(),v1.end());
    for(int i=0; i<n; i++){
      if(v[i]<v1[i]){
        ok=true;
      }
    }
  }
    if(ok) cout<<-1<<endl;
    else cout<<ans<<endl;
}

int main() {
    fastio();
    int t; cin >> t;
    while(t--) solve();
    return 0;
}