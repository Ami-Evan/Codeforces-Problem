#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
typedef long long ll;

void solve() {
    int n; cin>>n;
    pair<int,int>a,pos{0,0};
    cin>>a.first>>a.second;
    string s; cin>>s;
    if(pos==a){
      cout<<"YES"<<endl;
      return;
    }
    string ans="NO";
    for(int i=0; i<100; i++){
      for(auto x:s){
        if(x=='N') pos.second++;
        else if(x=='S') pos.second--;
         else if(x=='E') pos.first++;
          else if(x=='W') pos.first--;
          if(pos==a){
        ans="YES";
      }
      }
      
    }
    cout<<ans<<endl;
}

int main() {
    fastio();
    int t; cin >> t;
    while(t--) solve();
    return 0;
}