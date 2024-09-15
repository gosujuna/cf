#include <bits/stdc++.h>
using namespace std;
void solve() {
	const int N = 1e6 + 100;
    int w,f;cin >> w >> f;int n;cin >> n;
	vector<int> s(n);
	bitset<N+1> dp{};
	dp[0] = 1;
	int sum = 0;
	for (int i =0; i<n; i++){
		cin >> s[i];
		dp |= dp << s[i];
		sum += s[i];
	}
	int ans = 1e9;
	for (int i =0; i<= sum; i++){
		if (dp[i]){
			ans = min(ans,max((i + w - 1)/w, (sum - i + f -1 ) / f));
		}
	}
	cout << ans << endl;
}
signed main() {
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}