#include <bits/stdc++.h>
//#include "zdebug.h"
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

int n;
const int N = 100007;
int ans[N];
void rec(int r){
	if (r<0)
		return;
	int s = sqrt(2 * r);
	s *= s;
	int l = s - r;
	rec(l - 1);
	for (; l <= r; l++, r--){
		ans[l] = r;
		ans[r] = l;
	}
}
void solve(){
	// looknice;
	
	cin >> n;
	rec(n - 1);
	for (int i = 0; i < n; i++){
		cout << ans[i] << " ";
	}
	cout << endl;
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