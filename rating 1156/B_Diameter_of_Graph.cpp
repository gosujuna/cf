#include <bits/stdc++.h>
 
using namespace std;
 
#ifndef ONLINE_JUDGE
#include "zdebug.h"
#else
#define debug(...) 42
#endif
 
 
using ll = long long;
using str = string; // ben qi python
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
	ll h, p;
	cin >> h >> p;

	ll tasks = 1LL << h;

 
	tasks--;
	cout << tasks << endl;

	//ll ready = 1;
	//while (tasks > 0){
		//t++;
		
		//int process = min(ready ,p);
		//ready -= process;
 
		//tasks -= process;
		//if (help > ready){
		//	ready += (1 << t);
		//}
		
	
	
 
}
 
int main() {
	//	freopen("input.txt", "r", stdin);
	//	freopen("output.txt", "w", stdout);
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}