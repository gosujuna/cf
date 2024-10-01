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
using u64 = unsigned long long;
#define endl '\n'
#define sz(v) ((int)(v).size())
#define all(v) (v).begin(), (v).end()
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
// (random rng if you need it)
std::vector<int> minp, primes;
vector<vector<int>> divisors(100001); 



void solve(){
    int n;
    cin >> n;
	vector<int> x(n), y(n);
	for (int i =0; i<n; i++){
		cin >> x[i] >> y[i];
	}

	int m = *max_element(all(x));

	vector<vector<int>> divs(m+1);

	for (int i =1; i<=m; i++){
		for (int j =i; j<=m; j += i){
			divs[j].push_back(i);
		}
	}
	
	vector<int> f(m+1, -1);

	for (int i =0; i<n; i++){
		int ans = 0;
		for (auto d : divs[x[i]]){
			ans += (f[d] < i - y[i]);
			f[d] = i;
		}
		cout << ans << endl;
	}
	
}

signed main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    
    
    solve(); 
}
