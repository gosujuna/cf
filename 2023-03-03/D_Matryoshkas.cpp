#include <bits/stdc++.h>
using namespace std;
using ll = long long;

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
	 while (T--){
		int n;
		
		cin >> n;
		map<int, int> mp;
		vector<int> arr(n);

		for(int i = 0; i < n; i++){
			cin >> arr[i];
			mp[arr[i]] += 1;
		}

		int ans = n;
		int last = -1;
		int cnt = 0;
		for (auto& p : mp){
			if (p.first == last + 1){
				ans -= min(p.second, cnt);
			}
			last = p.first;
			cnt = p.second;
		}

		cout << ans << endl;
	 }
}