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
    ll n;
    cin>>n;
    vector<ll> arr(n);
    for(int i = 0; i < n ;i++) {
        cin>>arr[i];
    }

    vector<ll> pref(n+1);
    pref[0] = 0;
    for(int i = 1; i <= n ; i++) {
        pref[i] += arr[i-1] + pref[i-1];
    }

    ll m ;cin>>m;
    for(int i = 0; i < m ; i++) {
        ll l ,r;cin>>l>>r;
        cout<<pref[r] - pref[l-1]<<" ";
    }
    cout<<"\n";
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
