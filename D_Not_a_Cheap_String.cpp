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
	 while(T--){
		string w;
		int p;
		cin >> w;
		cin >> p;

		int n = w.size();

		int sum = 0;

		for (int j = 0; j < n; j++){
			sum += w[j] - 'a' + 1;
		}

		vector<vector<int>> pos(26);

		for (int j = 0; j < n; j++){
			pos[w[j] - 'a'].push_back(j);
		}

		vector<bool> used(n, true);

		for (int j = 25; j >= 0; j--){
			int cnt = pos[j].size();
			for (int k = 0; k < cnt; k++){
				if (sum > p){
					used[pos[j][k]] = false;
					sum -= j + 1;
				}
			}
		}

		string ans;
		for (int j = 0; j < n; j++){
			if(used[j]){
				ans += w[j];
			}
		}

		cout << ans << endl;
	 }
}