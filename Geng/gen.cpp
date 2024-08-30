#include <bits/stdc++.h>
using namespace std;

mt19937 rng(chrono::system_clock::now().time_since_epoch().count());
long long rand(long long a, long long b){
    return a + rng() % (b - a + 1);
}

int main() { 
	
	int n = rand(2, 14);
	int m = rand(1, 1e6);
	cout << n << " "<< m<< endl;
	set<int> used;
	for (int i = 0; i < n; i++){
		int x;
		do{
			x = rand(1, 100);
		} while (used.count(x));
		cout << x << " ";
		used.insert(x);
	}
	cout << endl;
}