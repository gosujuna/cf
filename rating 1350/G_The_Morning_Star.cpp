#include <bits/stdc++.h>

using namespace std;

#include <iostream>
#include <vector>
#include <string>

// std::vector<std::vector<char>> simulateFallingFigure(std::vector<std::vector<char>> matrix) {
//     int rows = matrix.size();
//     int cols = matrix[0].size();

//     // Find the drop distance
//     int minDrop = rows;
//     for (int col = 0; col < cols; ++col) {
//         int figureBottom = -1;
//         int obstacleTop = rows;

//         for (int row = 0; row < rows; ++row) {
//             if (matrix[row][col] == 'F') {
//                 figureBottom = row;
//             }
//             if (matrix[row][col] == '#') {
//                 obstacleTop = row;
//                 break;
//             }
//         }

//         if (figureBottom != -1) {
//             int drop = obstacleTop - figureBottom - 1;
//             minDrop = std::min(minDrop, drop);
//         }
//     }

//     // Apply gravity
//     for (int col = 0; col < cols; ++col) {
//         for (int row = rows - 1; row >= 0; --row) {
//             if (matrix[row][col] == 'F') {
//                 matrix[row][col] = '-';
//                 matrix[row + minDrop][col] = 'F';
//             }
//         }
//     }

//     return matrix;
// }

std::vector<std::vector<char>> simulateFallingFigure(std::vector<std::vector<char>> matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();

    // Find the drop distance
    int minDrop = rows;
    for (int col = 0; col < cols; ++col) {
		bool lastF = false;
        int lastindex=0;
		int drop = rows;

        for (int row = 0; row < rows; ++row) {
            if (matrix[row][col] == 'F') {
                lastF = true;
				lastindex = row;
            }
            if (matrix[row][col] == '#') {
				if (lastF == true){
					lastF = false;
					drop = min(drop, row - lastindex - 1);
				}
                
            }
			

        }

        
            
        minDrop = std::min(minDrop, drop);
        
    }

    // Apply gravity
    for (int col = 0; col < cols; ++col) {
        for (int row = rows - 1; row >= 0; --row) {
            if (matrix[row][col] == 'F') {
                matrix[row][col] = '-';
                matrix[row + minDrop][col] = 'F';
            }
        }
    }

    return matrix;
}

// Helper function to print the matrix
void printMatrix(const std::vector<std::vector<char>>& matrix) {
    for (const auto& row : matrix) {
        for (char cell : row) {
            std::cout << cell;
        }
        std::cout << std::endl;
    }
}

int main() {
    // Sample input
    std::vector<std::vector<char>> input = {
        {'-', 'F', 'F', '-', '-'},
        {'-', '-', 'F', 'F', '-'},
        {'-', '-', 'F', '-', '-'},
        {'-', '#', 'F', '-', '-'},
        {'#', 'F', 'F', '-', '-'},
		{'#', '-', '-', '-', '-'},
		{'#', '#', '-', '-', '-'},
		{'#', '-', '-', '-', '-'}
    };

    std::cout << "Initial state:" << std::endl;
    printMatrix(input);

    std::vector<std::vector<char>> result = simulateFallingFigure(input);

    std::cout << "\nAfter falling:" << std::endl;
    printMatrix(result);

    return 0;
}