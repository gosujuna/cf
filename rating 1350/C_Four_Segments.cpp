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
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int n;
	 cin >> n;
	 vector<int> p(n);
	 for (int i =0; i<n; i++){
		cin >> p[i];
	 }
	 string result(n,'0');
	 map<int,int> mp;

	 for (int i =0; i<n; i++){
		mp[p[i]] = i+1;
	 }

	 int seg = n;
	 int prev = n+1;
	 bool right = true;

	 for (int i = n; i >= 1; i--){
		int curr = mp[i];

		if (seg >= i){
			result[i-1] = '1';
		}
		
		if (right && curr < prev){
			seg = max(prev - curr - 1, curr-1); 
			right = false;
		} else if (!right && curr < prev){
			seg = max(prev - curr -1, curr - 1);
		}

		prev = curr;
		
		
	 }

	// debug(mp);




    
    cout << result << endl;
		
	 
}