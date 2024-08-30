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
	 int T;
	 cin >> T;
	 while (T--){
		int n;
		cin >> n;
		string s;
		cin >> s;

		string t = "9" + string(n - 2, '0') + "1";
    vector<int> a(n + 1, 0);
    a[0] = 1;
    a[n] = 1;
    if (s > t){
      a = vector<int>(n + 1, 1);
      a[n - 1] = 1;
    }
    for (int j = 0; j < n; j++){
      a[j] -= s[n - 1 - j] - '0';
    }
    for (int j = 0; j < n; j++){
      if (a[j] < 0){
        a[j] += 10;
        a[j + 1]--;
      }
    }


	for (int j = n - 1; j >= 0; j--){
      cout << a[j];
    }
    cout << endl;

		
	 

	 }}