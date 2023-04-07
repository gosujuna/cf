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

void solve(){
	int n;
	string s;
	cin >> n >> s;
	int x = 0;
	int k = 0;
	vector<int> o;
	vector<int> id;
	for (int i = 0; i < n; i++){
		if (s[i] == '1'){
			o.push_back(i);
			x++;
		} else{
			id.push_back(i);
			k++;
		}
	}
	if (k==1 || k==2){
		cout << "NO" << endl;
		return;
	}

	cout << "YES" << endl;
	vector<string> t(n, string(n, '='));

	for (int i = 0; i < n; ++i) t[i][i] = 'X';
    for (int i = 0; i < k; ++i) {
      int x = id[i], y = id[(i + 1) % k];
      t[x][y] = '+';
      t[y][x] = '-';
    }

    for (int i = 0; i < n; ++i) cout << t[i] << '\n';

	
}

int main() {
	//	freopen("input.txt", "r", stdin);
	//	freopen("output.txt", "w", stdout);
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }

	 
}