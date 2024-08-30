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
string LCS(string x, string y, int m, int n){
	int maxlen = 0;
	int endingindex = m;
	vector<vector<int>> lookup(m+1, vector<int>(n+1));

	for (int i = 1; i <= m; i++){
		for (int j = 1; j <= n; ++j){
			if (x[i-1] == y[j-1]){
				lookup[i][j] = lookup[i - 1][j - 1] + 1;
				if (lookup[i][j] > maxlen){
					maxlen = lookup[i][j];
					endingindex = i;
				}
			}
		}
	}
	return x.substr(endingindex - maxlen, maxlen);
}

int main() {
	//	freopen("input.txt", "r", stdin);
	//	freopen("output.txt", "w", stdout);
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while(T--){
		string a, b;
		cin >> a >> b;

		int m, n;
		m = int(a.size());
		n = int(b.size());
		string ans = LCS(a, b, m, n);
		int ok = ans.size();
		int c = m + n - ok - ok;
		cout << c << endl;
	 }
}
