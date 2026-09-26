#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
typedef long long ll;

void solve() {
    int n; cin>>n;
    cin.ignore();
    string s;
   getline(cin,s);
  // set<string>st;
  //  for(int i=0; i<n; i++){
  //     string s; cin>>s;
  //     st.insert(s);
  //  }
    stringstream ss(s);
    set<string>st;
    string word;
    while(ss>>word){
    //st.insert(word);
    set<char>c(word.begin(),word.end());
      string rt;
      for(char x:c){
        rt+=x;
      }
      st.insert(rt);
    }
    cout<<st.size()<<endl;
   
}

int main() {
    fastio();
    // int t; cin >> t;
    // while(t--) 
    solve();
    return 0;
}