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
	cin >> n;
	int cura = 0;
	int curb = 0;
	vector<tuple<int,int,int>> a;
	string ans(n,'G');
	string ans2(n,'A');
	int suma = 0;
	int sumb = 0;
	

	for (int i =0; i<n; i++){
		int x,y;
		cin >> x >> y;
		suma += x;
		sumb += y;
		a.push_back({x,y,i});
	}
	sort(all(a));
	int cura2 = cura;
	int curb2 = curb;
	int suma2 = suma;
	int sumb2 = sumb;
	
	

	for (auto [x,y,i] : a){
		if (cura + x <= sumb - 500){
			cura += x;
			sumb -= y;
			ans[i] = 'A';
		} else{
			curb += y;
			suma -= x;

		}
	}

	for (auto [x,y,i] : a){
		if (curb2 + y <= suma2 - 500){
			curb2 += y;
			suma2 -= x;
			ans2[i] = 'G';
		} else{
			cura2 += x;
			sumb2 -= y;

		}
	}
	if (abs(suma - sumb) <= 500) {
		cout << ans << endl;
	} else if (abs(suma2 - sumb2) <= 500) {
		cout << ans2 << endl;
	} else{
		cout << -1 << endl;
	}
	
	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 
		solve();
	 
}