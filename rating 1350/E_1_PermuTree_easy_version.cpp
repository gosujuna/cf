#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#include "zdebug.h"
#else
#define debug(...) 42
#endif


using str = string; // ben qi python
using i64 = long long;
#define endl '\n'
#define sz(v) ((int)(v).size())
#define all(v) (v).begin(), (v).end()




signed main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int n;
	cin >> n;
	vector<int> p(n,-1);
	vector<int> siz(n,1);

	for (int i = 1; i<n; i++){
		cin >> p[i];
		p[i]--;
	}

	for (int i = n-1; i>0; i--){
		siz[p[i]] += siz[i];
	}

	i64 ans = 0;
	vector<vector<int>> a(n);
	for (int i =1; i<n; i++){
		a[p[i]].push_back(siz[i]);
	}
	// a is vector of subtrees for each children
	for (int i =0; i<n; i++){
		if (a[i].empty()){
			continue;
		}

		auto &v = a[i];
		std::sort(v.begin(), v.end(), std::greater());
		int sum = accumulate(v.begin() + 1 , v.end(), 0LL);
		vector<int> dp(sum+1);
		dp[0] = 1;

		
		for (int i = 1, j=i; i < v.size(); i = j){
			while (j < sz(v) && v[i] == v[j]){
				j++;
			}
			int cnt = j-i;
			// min cnt = 1;
			int k =1;
			while (k < cnt){
				int x = v[i] * k;
				for (int j= sum; j>=x; j--){
					dp[j] |= dp[j-x];
				}
				cnt -= k;
				k *= 2;

			}
			int x = v[i] * cnt;
			for (int j = sum; j>=x; j--){
				dp[j] |= dp[j-x];
			}
			
		}
		int res = 0;
		for (int j =0; j<=sum; j++){
			if (dp[j]){
				res = max(res, 1LL * j * (siz[i] - 1 - j));
				res = max(res, 1LL *(j + v[0]) * (siz[i] - 1 - (j + v[0])));
			}
		}
		ans += res;

	}
	cout << ans << endl;

    
    return 0;
}