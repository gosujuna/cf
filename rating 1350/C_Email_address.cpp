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
	string s;
	cin >> s;
	
	bool at = false;
	string a = "";
	a.push_back(s[0]);
	int n = s.size();

	for (int i =1; i<n -1; i++){
		bool ok = false;
		if (i <= n-3){
			if (!at && s[i] == 'a' && s[i+1] == 't'){
				a.push_back('@');
				at = true;
				ok = true;
				i++;
			}
		}

		if (i <= n-4){
			if (s[i] == 'd' && s[i+1] == 'o' && s[i+2] == 't'){
				a.push_back('.');
				ok = true;
				i+= 2;
			}
		} 
		if (!ok) a.push_back(s[i]);
	}
	a.push_back(s[n-1]);
	cout << a << endl;
	
}

signed main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 
		solve();
	
}