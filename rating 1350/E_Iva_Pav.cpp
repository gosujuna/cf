#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#include "zdebug.h"
#else
#define debug(...) 42
#endif

#define int long long
using str = string; // ben qi python
using i64 = long long;
#define endl '\n'
#define sz(v) ((int)(v).size())
#define all(v) (v).begin(), (v).end()
template <typename T> T pow(T a, long long b) {
	assert(b >= 0);
	T r = 1;
	while (b) {
		if (b & 1)
			r *= a;
		b >>= 1;
		a *= a;
	}
	return r;
}

void solve(){
	// looknice;
	vector<pair<string,string>> result;
	string s;
	cin >> s;
	stringstream stream(s);
	string pair;
	while (getline(stream,pair, ';')){
		stringstream pairstream(pair);
		string first,second;
		if (getline( pairstream, first, ',') && getline(pairstream,second)){
			result.emplace_back(first,second);
		}
	} 
	debug(result);
	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}