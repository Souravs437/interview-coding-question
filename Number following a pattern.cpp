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
string s;

void solve(){
    cin>>s;
    n = s.size();
    stack<int> st;
    int val = 1;
    for(int i = 0; i < n + 1; i++) {
        st.push(val++);
        if(s[i] == 'I' || i == n) {
            while(st.empty() == false) {
                cout<<st.top();
                st.pop();
            }
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
