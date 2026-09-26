#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
typedef long long ll;

void solve() {
    int n; cin>>n;
    vector<char>v(n);
    for(int i=0; i<n; i++){
      cin>>v[i];
    }
    int cnt_A=0,cnt_D=0;
    for(int i=0; i<n; i++){
      if(v[i]=='A') cnt_A++;
      else cnt_D++;
    }
    if(cnt_A>cnt_D) cout<<"Anton"<<endl;
    else if(cnt_A<cnt_D) cout<<"Danik"<<endl;
    else  cout<<"Friendship"<<endl;
}

int main() {
    fastio();
    // int t; cin >> t;
    // while(t--)
     solve();
    return 0;
}