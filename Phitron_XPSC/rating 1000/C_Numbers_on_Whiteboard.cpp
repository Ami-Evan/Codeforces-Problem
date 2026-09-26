/*https://codeforces.com/contest/1430/problem/C*/

#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
typedef long long ll;

void solve() {
    int n; cin>>n;
    priority_queue<int>q;
    vector<pair<int,int>>v;
    for(int i=1; i<=n; i++){
      q.push(i);
    }
    for(int i=0; i<n-1; i++){
      int a=q.top();
      q.pop();
      int b=q.top();
      q.pop();
      int x=(a+b+1)/2;
      q.push(x);
      v.push_back({a,b});
    }
    cout<<q.top()<<endl;
    for(auto x:v){
      cout<<x.first<<" "<<x.second<<endl;
    }
}

int main() {
    fastio();
    int t; cin >> t;
    while(t--) solve();
    return 0;
}