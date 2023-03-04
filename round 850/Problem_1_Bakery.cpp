#include <bits/stdc++.h>
using namespace std;
using ll = long long;




int main() {

	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int T;
	 cin >> T;

	 while (T--) {
		 int n;
		 ll tc, tm;

		 cin >> n >> tc >> tm;

		 ll total = 0;

		 vector<ll> arr(n);
		 vector<ll> pricea(n);
		 vector<ll> priceb(n);

		 ll x = 0;
		 ll y = 0;

		 for (int i = 0; i < n; i++) {
			 ll a, b, c;
			 cin >> a >> b >> c;
			 ll z = a * tc + b * tm - c;

			 arr[i] = z;
			 pricea[i] = a;
			 priceb[i] = b;
			}




		 //
		 
		 while(*max_element(arr.begin(), arr.end()) > 0){
			 vector<ll>::iterator test;
			 test = max_element(arr.begin(), arr.end());

			 int ind = distance(arr.begin(), test);

			 


			 if (pricea[ind] > priceb[ind]){
				for (int i =0; i<n; i++) {
					arr[i] = arr[i] - pricea[i];
					


					
				}
				x++;
			 } else {
				for (int j =0; j<n; j++) {
					arr[j] = arr[j] - priceb[j];
					
	
				}
				y++;
			 }



		 }
		cout << x+y << endl;

		
	 }
}