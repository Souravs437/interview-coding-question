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

void solve() {
	ll n;
	cin>>n;
	vector<pair<ll,ll>> arr(n);
	for(int i = 0; i < n ; i++) {
		cin>>arr[i].first;
	}
	for(int i = 0; i < n ; i++) {
		cin>>arr[i].second;
	}

	vector<int> hh(100001 , 0);

	for(int i = 0; i < n ; i++)  {
		hh[arr[i].first]++;
		hh[arr[i].second + 1]--;
	}

	for(int i = 0 ; i < 100001 ; i++) {
		hh[i] += hh[i-1];
	}

	int solm = 0, pos = 0;

	for(int i = 0; i < 100001; i++) {
		if(hh[i] > solm) {
			solm = hh[i];
			pos = i;
		}
	}

	cout<<solm<<" "<<pos<<"\n";
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
