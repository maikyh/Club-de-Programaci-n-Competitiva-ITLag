#include <bits/stdc++.h>
using namespace std;

int binary_search(vector<int> &a, int amount){
    int l = 0;
    int r = a.size()-1;
    int ans = 0;
    while(l <= r){
        int mid = l + (r-l) / 2;
        if(a[mid] <= amount){
            ans = mid+1;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    return ans;
}

void solve (){
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i<n; i++) cin >> a[i];

    sort(a.begin(),a.end());
    
    int q; cin >> q;
    while(q--){
        int x; cin >> x;
        int ans = binary_search(a,x);
        cout<<ans<<'\n';
    }
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
