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

struct node {
	bool fl;
	node *child[26];
	node() {
		for(int i = 0; i < 26 ; i++) {
			child[i] = NULL;
		}
		fl = 0;
	}
};

void insert(string &s , node *root) {
	node *curr = root;
	for(int i = 0; i < s.size() ; i++) {
		int val = s[i] - 'a';
		if(curr->child[val] == NULL) {
			curr -> child[val] = new node;
		}
		curr = curr->child[val];
	}
	curr->fl = true;
}

bool present(string &s , node* root) {
	node *curr = root;
	for(int i = 0; i < s.size() ; i++) {
		int val = s[i] - 'a';
		if(curr->child[val] == NULL) {
			return false;
		} 
		curr = curr -> child[val];
	}
	return curr->fl;
}

void solve() {
	int n; cin>>n;
	string s;
	node *head = new node;
	for(int i = 0; i < n ; i++) {
		cin>>s;
		insert(s, head);
	}

	cin>>s;
	cout<<present(s , head)<<"\n";
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
