#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
typedef long long ll;
void solve(){
  ll n; cin>>n;
  ll min_bus,max_bus;
  if(n%2!=0 || n<4){
    cout<<-1<<endl;
  }
  else{
   
    min_bus=(n+6-1)/6;
    max_bus=n/4;
    cout<<min_bus<<" "<<max_bus<<endl;
   
  }
}

int main() {
    fastio();
    int t; cin >> t;
    while(t--) solve();
    return 0;
}