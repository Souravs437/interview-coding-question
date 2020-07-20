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
ll n,m;
string s[50];
ll vis[100][100];
ll dx[4] = {0,1,0,-1};
ll dy[4] = {1,0,-1,0};
void dfs(int r , int c) {
    if(vis[r][c]) {
        return;
    } 

    vis[r][c] = 1;

    for(int i = 0; i < 4; i++) {
        int x = r + dx[i];
        int y = c + dy[i];
        if(x >= 0&& x < n && y >= 0 && y < m && s[x][y] == 'X') {
            dfs(x , y);
        }
    }
}

void solve(){
    cin>>n>>m;
    for(int i =0 ; i < n ;i++) {
        cin>>s[i];
    }
    memset(vis ,0, sizeof vis);
    ll cnt = 0;
    for(int i = 0; i < n ; i++) {
        for(int j = 0; j < m ; j++) {

            if(!vis[i][j] && s[i][j] == 'X') {
                dfs(i,j);
                cnt++;
            }
        }
    }

    cout<<cnt<<"\n";

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
