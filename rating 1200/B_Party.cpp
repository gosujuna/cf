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

mt19937 rng(chrono::system_clock::now().time_since_epoch().count());
long long rand(long long a, long long b){
    return a + rng() % (b - a + 1);
}
int gen(){
	if (rand(0,10)> 5){
		return 1;
	} else{
		return 0;
	}
}

void solve(){
	// looknice;
	int a, b,n;
	cin >> a >> b>>n;

	double test = 1;
	for (int i = 0; i < n; i++){

		test *= (a + b * gen());

	}
	double m = n;

	double frac = 1 / m;


	test = pow(test,frac);

	cout << test << endl;
	double x = pow(a, 0.5);
	double y = pow(a + b, 0.5);
	cout << "gpt ans is" << x * y << endl;
}

int main() {
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while (T--){
		solve();
	 }
}