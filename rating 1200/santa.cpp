#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#include "zdebug.h"
#else
#define debug(...) 42
#endif


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
int count1 = 0;

void solve(){
	// looknice;
	count1++;
	double ans = 0;

	int n;
	cin >> n;
	vector<double> a(n);
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(all(a));
	double first = a[1] + a[0];
	first = first / 2;
	//cout << first << endl;
	double second = a[n - 1] + a[n - 2];
	second = second / 2;
	//cout << second << endl;

	if (n==5){
		double help1 = a[2] - a[1];
		double help2 = a[3] - a[2];
		if (help1 > help2){
			second = a[2] + a[4];
			second = second / 2;
		} else{
			first = a[0] + a[2];
			first = first / 2;
		}
	}
	ans = second - first;
	cout << fixed;

	cout << "Case #" << count1 << ": " << ans << endl;
}

int main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}