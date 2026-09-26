#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
typedef long long ll;
void solve(){
  ll n; cin>>n;
  vector<ll>v(n);
  for(int i=0; i<n; i++){
    cin>>v[i];
  }
  //sort(v.begin(),v.end());
  bool ok=false;
  for(int i=0; i<n; i++){
    if(i+1>=v[i]){
      ok=true;
    }
  }
  if(ok){
    cout<<"YES"<<'\n';
  }
  else{
    cout<<"NO"<<'\n';
  }
  }
  


int main() {
    fastio();
    int t; cin >> t;
    while(t--) solve();
    return 0;
}