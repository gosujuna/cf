#include <bits/stdc++.h>
using namespace std;
using ll = long long;
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

int main() {
	//	freopen("input.txt", "r", stdin);
	//	freopen("output.txt", "w", stdout);
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 long long T;
	 cin >> T;
	 while (T--){
		long long n;
		cin >> n;
		vector<ll> a(n),p(n);
		for (int i = 0; i < n; i++){
			cin >> a[i];
		}

		int l=0, r = 0;
		bool ans = true;

		for (int i = 0; i < n; i++){
			p[i] = i + 1;
		}

		while(r<n){
			while (r< n-1 && a[r] == a[r+1])
				++r;
			if (l==r)
				ans = false;
			else
				rotate(p.begin() + l, p.begin() + r, p.begin() + r + 1);
			l = r + 1;
			r++;
		}

		if (ans){
			for (auto &x : p){
				cout << x << " ";
			}
			cout << endl;
		}
		else {
			cout << -1 << endl;
		}
	 }
}