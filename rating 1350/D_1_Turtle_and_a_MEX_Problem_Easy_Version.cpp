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

int mex(vector<int> &a) {
    vector<bool> f(a.size() + 1, 0);
    for (int i : a) if (i <= (int) a.size()) f[i] = 1;
    int mex = 0;
    while (f[mex]) ++mex;
    return mex;
}

void solve(){
	// looknice;
	int n , m; 
	cin >> n >> m;
	
	vector<int> mxarray;
	int mxused;

	for (int i =0; i<n; i++){
		int len;
		cin >> len;
		vector<int> arr(len);
		for (int j=0; j<len; j++){
			cin >> arr[j];
		}
		int mx = mex(arr);
		arr.push_back(mx);
		int secondmx = mex(arr);
		
		mxused = max(mxused,mx);
		mxused = max(mxused,secondmx);
	}
	
	
	int ans = 0;
	
	if (mxused >= m){
		ans = mxused * (m+1);
	} else{
		ans += mxused * (mxused +1);
		ans += (mxused+ m + 1) * (m - mxused) / 2;
	}
	cout << ans << endl;

	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}