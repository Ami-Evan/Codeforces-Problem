#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
typedef long long ll;

void solve() {
    int n; cin>>n;
    set<int>s;
    int ans=0;
    for(int i=0; i<2*n; i++){
      int x; cin>>x;
      if(s.count(x)){
        s.erase(x);
      }
      else s.insert(x);
      ans=max(ans,(int)s.size());
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