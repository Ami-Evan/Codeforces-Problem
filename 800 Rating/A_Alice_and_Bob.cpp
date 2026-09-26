#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
typedef long long ll;

void solve() {
    int n,a; cin>>n>>a;
    int l=0,g=0;
    vector<int>v(n);
    for(int i=0; i<n; i++){
      cin>>v[i];
      if(v[i]>a) g++;
      else if(v[i]<a) l++;
    }
    if(l>g) cout<<a-1<<endl;
    else cout<<a+1<<endl;
    
}

int main() {
    fastio();
    int t; cin >> t;
    while(t--) solve();
    return 0;
}