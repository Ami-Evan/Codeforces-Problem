#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
typedef long long ll;

void solve() {
    int n; cin>>n; 
    vector<int>v(n+1,0);
    int ans=0;

    for(int i=2; i<=n; i++){
      if(v[i]==0){
      for(int j=i; j<=n; j+=i){
        v[j]++;
      }
      }
    }
    for(int i=2; i<=n; i++){
      if(v[i]==2){
        ans++;
      }
    }
    cout<<ans<<endl;

}

int main() {
    fastio();
    // int t; cin >> t;
    // while(t--) 
    solve();
    return 0;
}