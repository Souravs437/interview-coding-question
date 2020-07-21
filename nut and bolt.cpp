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
    map<char , int> mp;
    for(int i = 0; i <2* n ; i++) {
        char ch ; cin>>ch;
        mp[ch]++;
    }

    for(auto i : mp) {
        if(i.second == 2) {
            cout<<i.first<<" ";
        }
    }
    cout<<"\n";
    for(auto i : mp) {
        if(i.second == 2) {
            cout<<i.first<<" ";
        }
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
