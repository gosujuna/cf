#include <bits/stdc++.h>
using namespace std;
using ll = long long;

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
	 int n,k;
	 cin >> n >> k;

	 vector<int> arr(n);

	 for (auto& z : arr){
		cin >> z;
	 }

	 sort(arr.begin(), arr.end());
	 int sum = 0;
	 for (int i = 0; i < k; i++){
		sum += arr[i];
	 }

	 cout << sum << endl;
}