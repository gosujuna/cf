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

void solve() { int n;
	cin >> n;

	vector<ll> a(n);
	for (auto& i:a){
		cin >> i;
	}

	map<int,int> mp;

	int count = 0;
	int first=0;
	int second=0;

	for (int i = 0; i < n; i++){
		if (mp.count(a[i]) == 0){
			mp[a[i]] = i;
			count++;
			if (count == 1){
				first = i;
			}
			if (count ==2){
				second = i;
			}
		}
	}

	if (sz(mp) <=1){
		cout << "NO" << endl;
		return;
	}

	cout << "YES" << endl;

	for (int i = 1; i < n; i++){
		if (mp[a[i]] != first){
			cout << i+1 << " " << first +1<< endl;
		} else {
			cout << i+1 << " " << second+1 << endl;
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