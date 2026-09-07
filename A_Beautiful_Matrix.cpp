#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
typedef long long ll;

void solve() {
    int n=5;
    int row,col;
    for(int i=0; i<n; i++){
      for(int j=0; j<n; j++){
        int x; cin>>x;
        if(x==1){
          row=i; col=j;
        }
      }
    }
    int ans=abs(row-2)+abs(col-2);
    cout<<ans<<endl;
}

int main() {
    // fastio();
    // int t; cin >> t;
    // while(t--)
     solve();
    return 0;
}