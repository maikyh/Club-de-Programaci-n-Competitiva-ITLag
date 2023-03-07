#include <bits/stdc++.h>
using namespace std;

void solve (){
    string s; cin >> s;
    set<char> st;

    int cnt = 0;
    for(auto c : s){
        st.insert(c);
        if(st.size() == 4){
            st.clear();
            st.insert(c);
            cnt++;
        }
    }

    if(st.size()) cnt++;

    cout<<cnt<<'\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t = 1;
    cin >> t;    
    while (t--){
        solve();
    }
}
