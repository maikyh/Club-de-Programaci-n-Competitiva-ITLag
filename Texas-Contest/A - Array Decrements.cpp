#include <bits/stdc++.h>
using namespace std;

void solve (){
    int n; cin >> n;
    vector<int> a(n),b(n);
    for(int i = 0; i<n; i++) cin >> a[i];
    for(int i = 0; i<n; i++) cin >> b[i];
    int maxi = -1e9;
    for(int i = 0; i<n; i++){
        if(a[i]<b[i]){
            cout<<"NO"<<'\n';
            return;
        }
        maxi = max(maxi,abs(b[i]-a[i]));
    }
 
    for(int i = 0; i<n; i++){
        if(b[i]==0){
            if(a[i]-maxi <= 0) continue;
            else{
                cout<<"NO"<<'\n';
                return;
            }
        }
        else{
            if(a[i]-maxi == b[i]) continue;
            else{
                cout<<"NO"<<'\n';
                return;
            }
        }
    }
    cout<<"YES"<<'\n';
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
