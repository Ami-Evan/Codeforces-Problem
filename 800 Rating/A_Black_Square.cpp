#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
typedef long long ll;

void solve() {
    int P,Q,X,Y; cin>>P>>Q>>X>>Y;
    if(P<=X && X<=P+99 && Q<=Y && Y<=Q+99){
      cout<<"Yes"<<'\n';
    }
    else{
      cout<<"No"<<'\n';
    }
}

int main() {
    fastio();
    //int t; cin >> t;
   // while(t--) 
    solve();
    return 0;
}