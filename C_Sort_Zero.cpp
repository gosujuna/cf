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
	//	freopen("input.txt", "r", stdin);
	//	freopen("output.txt", "w", stdout);
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while(T--){
		int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      --a[i];
    }
    vector<int> last(n, -1);
    for (int i = 0; i < n; i++) {
      last[a[i]] = i;
    }
    int L = n - 1;
    while (L > 0 && a[L - 1] <= a[L]) {
      L -= 1;
    }
    if (L == 0) {
      cout << 0 << '\n';
      continue;
    }
    set<int> s;
    int ans = n + 1;
    int R = 0;
    for (int i = 0; i < n; i++) {
      R = max(R, last[a[i]]);
      s.insert(a[i]);
      if (R == i && i + 1 >= L) {
        ans = min(ans, (int) s.size());
      }
    }
    cout << ans << '\n';
	 }
}