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
	vector<int> a(n), b(n);
	for (auto& i:a){
		cin >> i;
	}
	for (auto& i:b){
		cin >> i;
	}

	vector<pair<int, int>> p(n);

	for (int i = 0; i < n; i++){
		p[i] = make_pair(a[i], b[i]);
	}
	sort(all(a));
	sort(all(b));
	vector<pair<int,int>> res;
	bool fail = false;
	for (int i = 0; i < n; i++){
		for (int j = i; j < n; j++){
			if (p[j] == make_pair(a[i], b[i])){
				swap(p[i], p[j]);
				if (i != j){
				res.emplace_back(i, j);
				}
				break;
			}
			
		}
		if (p[i] != make_pair(a[i], b[i])){
			fail = true;
			break;
		}

	}
	if (fail){
		cout << -1 << endl;
	} else {
		cout << res.size() << endl;
		for (auto& p:res){
			cout << p.first + 1 << " " << p.second + 1 << endl;
		}
	}

}

int main() {
	//	freopen("input.txt", "r", stdin);
	//	freopen("output.txt", "w", stdout);
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}