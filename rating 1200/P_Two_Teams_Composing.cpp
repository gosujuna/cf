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

	int n ;
	cin >> n;
	vector<int> a(n);
	set<int> s;

	for (auto& i:a){
		cin >> i;
		s.insert(i);
	}

	sort(all(a));

	int count =1;
	int curmax =  1;
	

	for (int i =1; i<sz(a); i++){
		if (a[i] == a[i-1]){
			count++;
			curmax = max(curmax,count);
		} else{
			count = 1;
		}
	}

	int ans = min(curmax-1,sz(s));
	int ans2 = min(curmax,sz(s)-1);
	cout << max(ans,ans2) << endl;

	
}

int main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}