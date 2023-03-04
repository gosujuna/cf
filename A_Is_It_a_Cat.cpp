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
void solve(){
int n;
		string s;
		cin >> n >> s;
		//next time get rid of all the strings and just find meow lol 

		bool one = false;
		bool two = false;
		bool three = false;

		if (s[0] != 'M' && s[0] != 'm'){
			cout << "NO" << endl;
			return;
		}

		if (n < 4){
			cout << "NO" << endl;
			return;
		}

					

	



		for (int i = 1; i < n; i++){
			if (s[i] != 'M' && s[i] != 'm' &&  s[i] != 'E' && s[i] != 'e' && s[i] != 'o' && s[i] != 'O' && s[i] != 'w' && s[i] != 'W'){
				cout << "NO" << endl;
				return;
			}

			if (one == false && (s[i] == 'O' || s[i] == 'o' || s[i] == 'W' || s[i] == 'w')){
				
				cout << "NO" << endl;
				return;
			}

			if ((s[i-1] == 'M' || s[i-1] == 'm') && (s[i] == 'E' || s[i] == 'e')){
				one = true;
				continue;
				//cout << i << endl;
			}

			if (one == true && (s[i] == 'M' || s[i] == 'm')){
				
				cout << "NO" << endl;
				return;
			}
			if ((s[i-1] == 'E' || s[i-1] == 'e') && (s[i] == 'O' || s[i] == 'o')){
				two = true;
				continue;
				//cout << i << endl;
			}

			if (two == false && (s[i] == 'W' || s[i] == 'w')){
				
				cout << "NO" << endl;
				return;
			}

			if (two == true && (s[i] == 'E' || s[i] == 'e' || s[i] == 'M' || s[i] == 'm')){
				
				cout << "NO" << endl;
				return;
			}
			if ((s[i-1] == 'o' || s[i-1] == 'O') && (s[i] == 'w' || s[i] == 'W')){
				three = true;
				continue;
				//cout << i << endl;
			}

			if (three == true && (s[i] == 'O' || s[i] == 'o' || s[i] == 'E' || s[i] == 'e' || s[i] == 'M' || s[i] == 'm')){
				
				cout << "NO" << endl;
				return;
			}

			


		}

		if (s[n-1] != 'W' && s[n-1] != 'w'){
			cout << "NO" << endl;
			return;
		}

		if (one && two && three){
				cout << "YES" << endl;
				} else{
				cout << "NO" << endl;
		}
}

int main() {
	//	freopen("input.txt", "r", stdin);
	//	freopen("output.txt", "w", stdout);
	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;
	 while(T--){
		solve();
		 }
}