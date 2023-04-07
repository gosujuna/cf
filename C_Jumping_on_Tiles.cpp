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
		string s;
		cin >> s;

	
		int n = int(s.size());

		map<char, vector<int>> let;
		for (int i = 0; i < n;i++){
			let[s[i]].push_back(i);
		}
		int direction = (s[0] < s[n - 1]) ? 1 : -1;
		vector<int> ans;

		for (char c = s[0]; c != s[n - 1] + direction; c+= direction){
			for (auto now: let[c]){
				ans.push_back(now);
			}
		}

			int cost = 0;
		for (int i = 1; i < int(ans.size()); i++){
			cost += abs(s[ans[i]] - s[ans[i - 1]]);
		}
		cout << cost << " " << int(ans.size()) << endl;

		for (auto now : ans){
			cout << now + 1 << " ";
		}
		cout << endl;
	 }
}