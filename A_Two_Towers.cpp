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

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int tt;
  cin >> tt;
  while (tt--) {
    int n, m;
    cin >> n >> m;
    string a;
    string b;
    cin >> a >> b;
    reverse(b.begin(), b.end());
    a += b;
    int cnt = 0;
    for (int i = 0; i < n + m - 1; i++) {
      cnt += (a[i] == a[i + 1]);
    }
    cout << (cnt <= 1 ? "YES" : "NO") << '\n';
  }
  return 0;
}