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

void solve(){
	// looknice;
	int n;
	cin >> n;
	vector<int> a(n+1);
	vector<int> b(n+1);
	for (int i =1; i<=n; i++){
		cin >> a[i];
	}
	for (int i =1; i<=n; i++){
		cin >> b[i];
	}

	vector<int> dis(n+1,-1);
	queue<int> q;
	dis[n] = 0;
	q.push(n);

	int L = n;

	vector<int> prev(n+1);
	while (!q.empty()){
		int x = q.front();
		q.pop();

		int y = x + b[x];
		while (L > y - a[y]){
			L--;
			prev[L] = x;
			dis[L] = dis[x] + 1;
			q.push(L);
		}
		debug(x,y,L);
	}

	cout << dis[0] << endl;
	if (dis[0] != -1){
		vector<int> a;
		for (int i =0; i!= n; i = prev[i]){
			a.push_back(i);
		}
		reverse(all(a));
		for (auto x : a){
			cout << x << " ";
		}
		cout << endl;
	}
	

	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 
		solve();
	 
}