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

struct point {
	int weight, position, id;
};

void solve(){
	// looknice;
	int n, m;
	cin>>n>>m;

	vector<point> a(m);


	for (int i = 0; i < m; i++) {
		int f, s;
		cin >> s >> f;
		a[i].position = s;
		a[i].weight= f;
		a[i].id = i + 1;
	}

	sort(all(a), [] (point a, point b){
		return a.weight < b.weight;
	});

	int l = 0;
	int r = 2 * n - 1;
	ll sum = 0;

	for (int i = 0; i < m; i++){
		if (i< 2*n) {
			sum += a[i].weight;

		} else{
			a.pop_back();
		}
	}
	sort(all(a), [] (point a, point b){
		return a.position < b.position;
	});


		cout << sum << endl;

	for (int i = 0; i < n; i++){

		cout << a[l].id << " " << a[r].id << endl;
		l++;
		r--;
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