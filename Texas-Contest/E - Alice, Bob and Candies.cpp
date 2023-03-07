#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve (){
    int n; cin >> n;

    vector<ll> a(n);
    for(int i = 0; i<n; i++) cin >> a[i];

    ll cnt = 0, sumL = 0, sumR = 0, maxi = 0;
    int l = 0, r = n-1;
    bool flg = 1;

    while(l <= r){
        ll currL = 0, currR = 0;

        if(flg){ 
            while(l <= r && currL <= maxi){ 
                currL += a[l++];
            }
        }
        else{ 
            while(l <= r && currR <= maxi){ 
                currR += a[r--];
            }
        }

        maxi = max(currL,currR);
        sumL += currL;
        sumR += currR;
        flg = !flg;
        cnt++;
    }
    
    cout<<cnt<<" "<<sumL<<" "<<sumR<<'\n';
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
