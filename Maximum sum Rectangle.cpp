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


void solve(){
    ll n , m;
    cin>>n>>m;
    vector<vector<ll>> mat(n , vector<ll>(m,0));

    for(int i = 0; i < n ; i++) {
        for(int j = 0; j < m ; j++) {
            cin>>mat[i][j];
        }
    }

    ll ans = 0;

    for(int j = 0; j < m; j++) {
        vector<ll> temp(n);
        for(int k = j ; k < m; k++) {
            for(int i = 0; i < n ;i++) {
                temp[i] += mat[i][k];
            }


            ll curr = 0, mx = 0;
            for(int i = 0; i < n ; i++) {
                curr = max(temp[i] + curr , temp[i]);
                mx = max(mx , curr);
            } 
            ans = max(ans , mx);
        }
    }

    cout<<ans<<"\n";
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
