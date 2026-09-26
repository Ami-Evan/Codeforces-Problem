#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
typedef long long ll;

void solve() {
    int n; cin>>n;
    ll sum=0;
    ll mx=0,v=0;
    map<int,int>mp;
    for(int i=0; i<n; i++){
      int x; cin>>x;
      sum+=x;
      mp[x]++;
    }
    for(auto m:mp){
      if(m.second>mx){
        mx=m.second;
        v=m.first;
      }
    }
    ll card=n-mx;
    if(card+1>=mx){
      cout<<sum<<endl;
    }
    else{
      ll ans=sum-(v*mx);
      ans+=v*(card+2);
      cout<<ans<<endl;
    }
}

int main() {
    fastio();
    int t; cin >> t;
    while(t--) solve();
    return 0;
}