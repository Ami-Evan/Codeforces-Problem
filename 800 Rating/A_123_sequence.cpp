#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
typedef long long ll;

void solve() {
    int n; cin>>n;
    map<int,int>mp;
    for(int i=0; i<n; i++){
      int x; cin>>x;
      mp[x]++;
    }
    int mx=0;
    for(auto m:mp){
      mx=max(mx,m.second);
    }
    cout<<n-mx<<endl;
}

int main() {
    fastio();
    // int t; cin >> t;
    // while(t--)
     solve();
    return 0;
}