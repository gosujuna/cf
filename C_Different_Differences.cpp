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
		int k, n;
		cin >> k >> n;
		vector<int> ans;
		ans.push_back(1);
		int nxt = 1;

		while (int(ans.size()) < k){
			if (ans.back() + nxt + k - int(ans.size()) - 1 <= n){
				ans.push_back(ans.back() + nxt);
				nxt++;
			} else{
				ans.push_back(ans.back() + 1);
			}
		}

		for (auto& a : ans){
			cout << a << " ";
		}

		cout << '\n';
	 }
}