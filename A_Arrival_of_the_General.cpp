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
    int max=*max_element(v.begin(),v.end());
    int min=*min_element(v.begin(),v.end());
   // int min=v[0];
    int max_i=0,min_i=0;
    for(int i=0; i<n; i++){
      if(v[i]==max){
       // max=v[i];
        max_i=i;
        break;
      }
    }
    for(int i=n-1; i>0; i--){
      if(v[i]==min){
       // max=v[i];
        min_i=i;
        break;
      }
    }
    //int ans=(max_i+1)+(min_i+1);
    int ans=max_i+(n-min_i-1);
    if(max_i>min_i){
      ans--;
    }
    cout<<ans<<endl;
}

int main() {
    fastio();
    // int t; cin >> t;
    // while(t--) 
    solve();
    return 0;
}