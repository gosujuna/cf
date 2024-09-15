#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#include "zdebug.h"
#else
#define debug(...) 42
#endif

#define int long long
using str = string; // ben qi python
using i64 = long long;
#define endl '\n'
#define sz(v) ((int)(v).size())
#define all(v) (v).begin(), (v).end()


void solve(){
	// looknice;
	int n,d;
	cin >> n >> d;
	vector dp(n+1, vector<int>(2));
	vector<int> a(n);
	for (int i =0; i<n; i++){
		cin >> a[i];
	}
	bool ok = true;
	int ans = 0;
	dp[0][0] = 0;
	dp[0][1] = 0;
	int cnt = 0;
	for (int i =1; i<=n; i++){
		if (a[i-1] == 0){
			if (dp[i-1][0] < 0 && dp[i-1][1] < 0){
				dp[i][0] = d;
				dp[i][1] = 0;
				ans++;
			} else{
				dp[i][0] = dp[i-1][0];
				dp[i][1] = dp[i-1][1];
			}
		} else{
			dp[i][0] = dp[i-1][0] + a[i-1];
			
			dp[i][1] = dp[i-1][1] + a[i-1];
			

			if (dp[i][0] > d){
				cnt += (dp[i][0] - d);
				dp[i][0] = d;
			}
		}

		if (dp[i][0] < dp[i][1]){
			ok = false;
			break;
		}

		
	}

	
	for (int i=0; i<=n; i++){
		if (dp[i][1] > d){
			ok = false;
			break;
		}
	}
	if (cnt > d){
		ok = false;
	}

	if (a[n-2] == 0 && a[n-1] > d){
		ok = false;
	}

	if (!ok){
		cout << -1 << endl;
		return;
	}
	cout << ans << endl;


}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 
		solve();
	 
}

//   m= 10
// 	-5    0   10  -11  0

// 0	-5  10    10  -1   10                     max
// 0	-5 0    10    -1   0  					min

//   m=4

//     -10  0  20
// 0   -10  4  24

// 0   -10 0   20

// dp array max, min fill it up somehow
// if prev max < next min then need ans ++
// if prevmin > next max need return -1
// maybe need to propogate backwards?
