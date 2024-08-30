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
	int n, a, b;
	cin >> n >> a >> b;
	str s;
	cin >> s;

	if (b>=0){
		cout << (a + b) * n << endl;
		return;
	}
	int curzero = 0;
	int curone = 0;
	int last = 0;

	for (int i = 0; i < n-1;i++){
		if(s[i] != s[i+1] && s[i] == '0'){
			curzero++;
			last = 1;
		}
		if(s[i] != s[i+1] && s[i] == '1'){
			curone++;
			last = 0;
		}
	}

	if (last == 1)
		curone++;
	else curzero++;

	//cout << curzero << " " << curone << endl;

	int current = min(curzero, curone);
	cout << (a * n) + (current+1) * (b) << endl;
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