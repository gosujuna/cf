#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#include "zdebug.h"
#else
#define debug(...) 42
#endif


using str = string; // ben qi python
using i64 = long long;

#define sz(v) ((int)(v).size())
#define all(v) (v).begin(), (v).end()
#include <iostream>
#include <vector>
#include <cassert>

// Include the Solution class here (previous code)
class Solution {
public:
    int maxSizeSquareSubmatrix(std::vector<std::vector<int>>& matrix, int threshold) {
        int n = matrix.size();

		vector pref(n+1, vector<int>(n+1,0));

		auto calc = [&](){
			for (int i =1; i<=n; i++){
				for (int j =1; j<=n; j++){
					pref[i][j] = matrix[i-1][j-1] + pref[i][j-1] + pref[i-1][j] - pref[i-1][j-1];
				}
			}
		};

		auto get = [&](int row1, int col1, int row2, int col2){
			return pref[row2+1][col2+1] - pref[row1][col2 + 1] - pref[row2+1][col1] + pref[row1][col1];
		};

		auto valid = [&] (int size){
			for (int i =0; i<=n - size; i++){
				for (int j =0; j<= n- size; j++){
					if (get(i,j,i+size-1, j+size-1) > threshold){
						return false;
					}
				}
			}
			return true;
		};

		calc();

		int left = 0;
		int right = n;
		while (left < right){
			int mid = (left + right) / 2;
			if (valid(mid)){
				left = mid+1;
			} else{
				right = mid;
			}
		}

		return (valid(left) ? left : left-1);
		


    }
};

int main() {
    Solution solution;

    // Test case 1: Basic case
    std::vector<std::vector<int>> matrix1 = {
        {1, 1, 1},
        {1, 1, 1},
        {1, 1, 1}
    };
    int threshold1 = 4;
    int expected1 = 2;
    int result1 = solution.maxSizeSquareSubmatrix(matrix1, threshold1);
    std::cout << "Test case 1: " << (result1 == expected1 ? "PASSED" : "FAILED") << std::endl;
    std::cout << "Expected: " << expected1 << ", Got: " << result1 << std::endl;

    // Test case 2: All elements satisfy the threshold
    std::vector<std::vector<int>> matrix2 = {
        {1, 1, 1, 1},
        {1, 1, 1, 1},
        {1, 1, 1, 1},
        {1, 1, 1, 1}
    };
    int threshold2 = 16;
    int expected2 = 4;
    int result2 = solution.maxSizeSquareSubmatrix(matrix2, threshold2);
    std::cout << "Test case 2: " << (result2 == expected2 ? "PASSED" : "FAILED") << std::endl;
    std::cout << "Expected: " << expected2 << ", Got: " << result2 << std::endl;

    // Test case 3: No submatrix satisfies the threshold
    std::vector<std::vector<int>> matrix3 = {
        {2, 2, 2},
        {2, 2, 2},
        {2, 2, 2}
    };
    int threshold3 = 1;
    int expected3 = 0;
    int result3 = solution.maxSizeSquareSubmatrix(matrix3, threshold3);
    std::cout << "Test case 3: " << (result3 == expected3 ? "PASSED" : "FAILED") << std::endl;
    std::cout << "Expected: " << expected3 << ", Got: " << result3 << std::endl;

    
    return 0;
}