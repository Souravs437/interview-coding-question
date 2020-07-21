#include "bits/stdc++.h"
using namespace std;

#define S second
#define F first
#define all(a) a.begin() , a.end()
#define pb push_back 
#define DBG cout<<"debug\n";

typedef long long ll;

const int N = 2 * 1e5 + 10;
const ll inf = 9e18 + 9; 

ll res;
ll a[N];
ll n;

ll dp[100];

ll go(ll root) {
    if(root == 0 || root == 1) {
        return  1;
    }
    if(root < 0) {
        return 0;
    }
    if(dp[root] + 1) {
        return dp[root];
    }
    ll ans = 0;
    for(int i = 1 ; i <= root ; i++) {
        ans += go(i-1) * go(root - i);
    }
    return dp[root] = ans;
}
void solve(){
    cin>>n;
    ll ans = 0;
    memset(dp , -1, sizeof dp);
    ans = go(n);
    cout<<ans<<'\n';
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
