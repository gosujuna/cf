#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#include "zdebug.h"
#else
#define debug(...) 42
#endif


using ll = long long;
using str = string; // ben qi python
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
	int n;
	cin >> n;
	int permutation[n], location[n];
	for(int i = 0; i < n; i++)
	{
		cin >> permutation[i];
		permutation[i]--;
		location[permutation[i]] = i;
	}
	for(int i = 0; i < n; i++)
	{
		if(location[i] == n-1)
			cout << 1 << (i == n-1?'\n':' ');
		else
			cout << location[i]+2 << (i == n-1?'\n':' ');
	}
	
}

int main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}