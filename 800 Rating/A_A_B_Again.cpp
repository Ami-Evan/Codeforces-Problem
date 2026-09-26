#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
typedef long long ll;

void solve() {
    int n; cin>>n;
    int sum=0;
   while(n>0){
       sum+=n%10;
       n/=10;
   }
    
    cout<<sum<<'\n';
}

int main() {
    fastio();
    int t; cin >> t;
    while(t--) solve();
    return 0;
}