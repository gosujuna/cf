#include <bits/stdc++.h>
using namespace std;
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
	ll l, r, x, a, b;
	cin >> l >> r >> x >> a >> b;
	if (a==b){
		cout << 0 << endl;
		return;
	}

	if (abs(a-b) >= x){
		cout << 1 << endl;
		return;
	}

	if (r-max(a,b) >= x || min(a,b)- l >= x){
	cout << 2 << endl;
	return;
	}

	if ((r-b >=x && a-l >=x) || (r-a >=x && b-l>=x)){
	cout << 3 << endl;
	return;
	}
	cout << -1 << endl;
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