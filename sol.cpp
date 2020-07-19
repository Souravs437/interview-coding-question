//SkGeN
#include<iostream>
#include<algorithm>
#include<bitset>
#include<cmath>
#include<cstring>
#include<climits>
#include<deque>
#include<queue>
#include<vector>
#include<set>
#include<map>
#include<unordered_set>
#include<unordered_map>
#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef pair<ll,ll> p64;
typedef vector<ll> v64;
const int N = 2 * 1e5 + 10;
const ll inf = 1e18 + 100;
const ll mod = 1e9 + 7;
 
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i,s,e) for(long long i=s;i<=e;i++)
#define brep(i,s,e) for(long long i=s;i>=e;i--)
#define all(x) x.begin(),x.end()
#define mem(x,y) memset(x,y,sizeof(x))
#define DANGER std::ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
string s;
ll dp[101][2][2][2];
ll go(int idx , int a , int b , int c) {
	if(idx == s.size()) {
		if(a&&b&&c) {
			return 1;
		} else {
			return 0;
		}
	}

	if(dp[idx][a][b][c] + 1) {
		return dp[idx][a][b][c];
	}
	ll xx = go(idx + 1, a , b , c) , yy = 0;
	if(s[idx] == 'a' && !b && !c) {
		yy = go(idx + 1, 1, 0 , 0);
	} else if(s[idx] == 'b' && a && !c) {
		yy = go(idx + 1, 1, 1, 0);
	} else if(s[idx] == 'c' && a && b) {
		yy = go(idx + 1, 1 ,1 ,1);
	}
	return dp[idx][a][b][c] = xx + yy;
}
void solve() {
	cin>>s;
	mem(dp , -1);
	cout<<go(0,0,0,0)<<"\n";
}
int main()
{
	DANGER;
	ll t = 1;
	cin>>t;
	while(t--) {
		solve();
	}
return 0;
}
//---->O ,,