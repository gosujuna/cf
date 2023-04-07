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

void solve(){
	// looknice;
	int n;
	cin >> n;
	vector<ll> a(n);
	for (auto& i:a){
		cin >> i;
	}
	vector<ll> b(n);
	for (auto& j:b){
		cin >> j;
	}

	vector<pair<ll,int>> c(n);
	for (int i = 0; i < n; i++){
		c[i].first = b[i] - a[i];
		c[i].second = i;
	}
	sort(c.rbegin(), c.rend());
	int j = n - 1;
	int count = 0;

	for (int i = 0; i < n; i++){
		while (j>i && c[i].first + c[j].first <0){
			j--;
		} if(j<=i){
			break;
		}
		count++;
		j--;
	}
	cout << count << endl;
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