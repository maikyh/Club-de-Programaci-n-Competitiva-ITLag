#include <bits/stdc++.h>
using namespace std;

void solve (){
    int n; cin >> n;
    vector<pair<int,int>> vals;

    for(int i = 0; i<n; i++){
        int l,r; cin >> l >> r;
        vals.push_back({l,1});
        vals.push_back({r,-1});
    }

    sort(vals.begin(),vals.end());
    
    int ans = 0;
    int sum = 0;
    for(auto val : vals){
        sum += val.second;
        ans = max(ans,sum);
    }

    cout<<ans<<'\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t = 1;
    // cin >> t;    
    while (t--){
        solve();
    }
}
