#include <bits/stdc++.h>
using namespace std;
using ll = long long;
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
	string s, t;
	cin >> s >> t;
	int a = int (s.size());
	int b = int(t.size());

	if (b == 1 && t == "a"){
		cout << 1 << endl;
		return;
	}
	for (int i = 0; i < b; i++){
		if (t[i] == 'a'){
			cout << -1 << endl;
			return;
		}
	}

	ll c = pow(2, a);

	cout << c << endl;
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