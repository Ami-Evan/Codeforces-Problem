#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
typedef long long ll;

void solve() {
    int n; cin>>n;
    string s; cin>>s;
    
    
    if(s.find('0')!=string::npos){
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