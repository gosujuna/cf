#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main() {

	 ios_base::sync_with_stdio(false), cin.tie(nullptr);
	 int g,n;
	 cin >> g >> n;

	 vector<vector<ll>> test;

	 for (int i = 0; i < g; i++) {
		vector<ll> arr(3);

		for (int j = 0; j < 3; j++){
			cin >> arr[j];

		}
		test.push_back(arr);
	 }

	 int count = 0;



	 // input g put in

	 for (int i = 0; i < n; i++){
		vector<ll> dist(3);
		cin >> dist[0] >> dist[1] >> dist[2];




		for (int j = 0; j < g; j++) {

			ll dx = 0;
			ll dy = 0;
			ll dt = 0;

			dx = test[j][0] - dist[0];
			dy = test[j][1] - dist[1];
			dt = test[j][2] - dist[2];

			if (abs(dx) > abs(dt) || abs(dy) > abs(dt)) {
				count++;
				break;
			}


			if ((dx*dx + dy*dy) > dt*dt){
				count++;
				//cout << "difference is" << dx << "and dy is" << dy
					 //<< "and dt is" << dt << endl;
				break;
			}


			
		}


		
	 }
	 cout << count << endl;
}