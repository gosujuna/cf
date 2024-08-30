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
vector<int> dp(1e6 + 1);

void calc(){
	int num = 0;
	map<int,int> triangle;
	int count = 0;
	vector<int> edge(1e6+10000,0);
	while (num < 1e6+1000){
		count++;
		num += count;
		edge[num] = 1;
		edge[num+1] = -1;
		
		for (int i =0; i<count; i++){
			triangle[num-i] = count;
		}
	}

	
	
	
	dp[1] = 1;
	for (int i =2; i<= 1e6+100; i++){
		if (edge[i] == 1){
			dp[i] = dp[i-triangle[i]] + i*i; 
		} 
		else if (edge[i] == -1){
			dp[i] = dp[i - triangle[i] + 1] + i*i ;
		}
		else{
			dp[i] = dp[i-triangle[i]] + dp[i - triangle[i] + 1] + i*i - dp[i - 2*(triangle[i] - 1)];
		}
	}
}

void solve(){
	int n;
	cin >> n;
	cout << dp[n] << endl;

}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 calc();
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}