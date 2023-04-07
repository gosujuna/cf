#include <bits/stdc++.h>
using namespace std;
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
	//	freopen("input.txt", "r", stdin);
	//	freopen("output.txt", "w", stdout);
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int r1, c1, r2, c2;
	 cin >> r1 >> c1 >> r2 >> c2;
	 int r =0, b=0,k=0;

	 if (r1 == r2 || c2 == c1){
		r += 1;
	 } else{
		r += 2;
	 }

	 int bdiff = abs((r1 + c1))- abs(r2 + c2);
	 int test = abs(r1 - r2) - abs(c1 - c2);
	 int diff = min(abs((r1 - r2)), abs((c1 - c2)));

	 if (bdiff ==0 || test==0){
		b += 1;
	 } else if(bdiff % 2 == 0 || test %2 ==0){
		b += 2;
	 }
	 else {
		b = 0;
	 }
	 

	 int cdiff = max(abs((r1 - r2)), abs(c1 - c2)) - diff;
	 k = diff + cdiff;
	 cout << r << " " << b << " " << k << endl;
}