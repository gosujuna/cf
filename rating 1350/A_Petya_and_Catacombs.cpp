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
	 string s = "ab,cd#as,fd#zx,sc";
	 vector<vector<string>> strings;
	 stringstream ss(s);
	 string curword;
	 string help;
	 

	 while (getline (ss,curword, '#')){
		stringstream two(curword);
		vector<string> p;
		while (getline (two,help, ',')){
			p.push_back(help);
		}
		strings.push_back(p);
	 }
	 cout<< strings[0][0] << " " << strings[0][1] << endl; 
	 cout<< strings[2][0] << " " << strings[2][1] << endl; 
	 


	 
}