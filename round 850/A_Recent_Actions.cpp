#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define sz(v) ((int)(v).size())
#define all(v) (v).begin(), (v).end()

#define dbg(v)                                                                 \
	cout << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;

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
		int n, m;

		cin >> n >> m;
		vector<int> res(n, -1);

		int idx = n - 1;

		set<int> was;

		for (int j = 0; j < m; j++) {
			int v;
			cin >> v;
			if(was.contains(v))
				continue;
			
			if ( idx>= 0) {
				res[idx--] = j + 1;
			}
			was.insert(v);
		}

		for (int i = 0; i < n; i++) {
			cout << res[i] << " \n"[i+1==n];
		}

	 }
}