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
    vector<int> arr(n);
    for(int i = 0; i < n ; i++) {
        cin>>arr[i];
    }

    int lp = 0, rp = n - 1;
    int cst = 0;
    while(lp < rp) {
        if(arr[lp] == arr[rp]) {
            lp++;
            rp--;
        } else if(arr[lp] > arr[rp]) {
            arr[rp-1] += arr[rp];
            cst++;
            rp--;
        } else {
            arr[lp+1] += arr[lp];
            lp++;
            cst++;
        }
    }

    cout<<cst<<"\n";
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
