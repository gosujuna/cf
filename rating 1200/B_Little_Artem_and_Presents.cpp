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



int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);
         int T;
         cin >> T;
         if (T < 3) {
           cout << 1 << endl;
           return 0;
         }

         if (T % 3 == 0) {
           cout << (T/3)*2 << endl;
         } else {
           cout << (T/3)*2 + 1 << endl;
		 }
		 
}