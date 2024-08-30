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

int n;
vector<int> a(2020);

int go(int i ,int sum){
	if (i == n)
		return 0;
	for (int j = i + 1, cur = 0; j <= n; ++j){
		cur += a[j - 1];
		if (cur >sum)
			return n;
		if (cur == sum)
			return max(j - i, go(j, sum));
	}
	return n;
}

int solve() { int ans = n;
	for (int len = 1, sum = 0; len < n; ++len){
		sum += a[len - 1];
		ans = min(ans, go(0, sum));

	}
	return ans;
}

int main() {
	//	freopen("input.txt", "r", stdin);
	//	freopen("output.txt", "w", stdout);
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		
		cin >> n;
		

		for (int i = 0; i < n; i++){
			cin >> a[i];
		}
		cout << solve() << endl;
	 }
}

