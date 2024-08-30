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

void solve(){
	// looknice;
	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int n;
	 cin >> n;
	 vector<int> h(n);
	 for (int i =0; i<n; i++){
		cin >> h[i];
	 }

	 vector<vector<int>> g(n);
	 for (int rot = 0; rot<2; rot++){
		auto Add = [&](int i, int j){
			g[i].push_back(j);
		};
		vector<int> st;
		for (int i =0; i<n; i++){
			while (!st.empty() && h[st.back()] < h[i]){
				Add(st.back(), i);
				st.pop_back();
			}
			if (!st.empty()){
				Add(st.back(),i);
				if (h[st.back()] == h[i]){
					st.pop_back();
				}
			}
			st.push_back(i);
		}
		for (int i =0; i<n; i++){
			h[i] = -h[i];
		}
		
	 }

	 vector<int> dist(n,-1);
	 vector<int> que(1,0);
	 dist[0] = 0;
	 for (int b=0; b< (int) que.size(); b++){
		for (int j : g[que[b]]) {
			if (dist[j] == -1) {
				que.push_back(j);
				dist[j] = dist[que[b]] + 1;
			}
		}
	 }
	 cout << dist[n-1] << endl;
}