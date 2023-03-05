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
	 int T;
	 cin >> T;
	 while (T--){
		int n;
		cin >> n;
		vector<int> arr(n);

		for (auto& i : arr){
			cin >> i;
		}
		sort(arr.begin(), arr.end());

		int mindiff = arr[1] - arr[0];
		int minl = 0;

		for (int i = 1; i < n - 1; i++){
			if (arr[i+1] - arr[i] < mindiff){
				mindiff = arr[i + 1] - arr[i];
				minl = i;
			}
		}

		cout << arr[minl] << " ";

		for (int i = minl + 2; i < n; i++){
			cout << arr[i] << " ";
		}

		for (int i = 0; i < minl; i++) {
			cout << arr[i] << " ";
		}

		cout << arr[minl + 1] << " ";



		cout << endl;
	 }
}