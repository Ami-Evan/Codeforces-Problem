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
    sort(v.begin(),v.end());
    for(auto x:v){
      cout<<x<<" ";
    }
}

int main() {
    fastio();
    // int t; cin >> t;
    // while(t--)
     solve();
    return 0;
}