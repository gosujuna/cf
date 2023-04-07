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
	 while (T--){
		int n;
		cin >> n;
		vector<int> a(n);
		for (auto& i:a){
			cin >> i;
		}

		int res = 0;
		vector<int> cnt(3);

		for (int x = 0; x <= 2; x++){
			for (int i = 0; i < n; i++){
				if (a[i] % 3 ==x){
					cnt[x]++;
				}
			}
		}
		
		while (*min_element(cnt.begin(), cnt.end()) != n/3){
			for (int i = 0; i < 3; i++){
				if (cnt[i] > n/3){
					res++;
					cnt[i]--;
					cnt[(i + 1) % 3]++;
				}
			}
		}
		cout << res << endl;
	 }
}