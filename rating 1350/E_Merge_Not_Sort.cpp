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
	int n;
    std::cin >> n;
    vector<int> c(2*n);
	vector<int> dp(n+1 ,2*n +1);
	dp[0] = 0;
	vector<int> len;
	int lst = 0;
	for (int i =0; i<2*n; i++){
		cin >> c[i];
	}

	for (int i =1; i<= 2*n; i++){
		if (i == 2*n || c[i] > c[lst]){
			len.push_back(i-lst);
			lst = i;
		}
	}
	debug(len);


	for (int i =0; i<sz(len); i++){
		for (int j = n- len[i]; j >=0; j--){
			if (dp[j] <= i && dp[j+len[i]] > i+1){
				dp[j +len[i]] = i+1;
			}
		}
	}
	if (dp[n] > len.size()){
		cout << -1 << endl;
		return;
	}
	vector<int> f(sz(len));
	int j = n;
	for (int i = len.size() -1; i>=0; i--){
		if (dp[j] <=i){
			f[i] = 1;
		} else{
			f[i] = 0;
			j -= len[i];
		}
	}
	vector<int> a,b;
	lst = 0;
	for (int i =0; i<sz(len); i++){
		for (int j =0; j<len[i]; j++){
			int x = c[lst++];
			if (f[i] == 0){
				a.push_back(x);
			} else{
				b.push_back(x);
			}
		}
	}

	for (int i =0; i<n; i++){
		cout << a[i] << " \n"[i==n-1];
	}
	for (int i =0; i<n; i++){
		cout << b[i] << " \n"[i==n-1];
	}

    


}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 
		solve();
	 
}