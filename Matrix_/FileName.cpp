#include <iostream>

using namespace std;

const int MAX_ROWS = 100;
const int MAX_COLS = 100;

int main() {
    int rows, cols;

    // Input matrix dimensions
    cout << "Enter the number of rows and columns for the matrix: ";
    cin >> rows >> cols;

    // Input matrix
    int matrix[MAX_ROWS][MAX_COLS];
    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }

    int subRows, subCols;

    // Input submatrix dimensions
    cout << "Enter the number of rows and columns for the submatrix: ";
    cin >> subRows >> subCols;

    int maxSum = 0;
    int maxRow = -1, maxCol = -1;

    for (int i = 0; i <= rows - subRows; ++i) {
        for (int j = 0; j <= cols - subCols; ++j) {
            int currentSum = 0;

            // Calculate the sum of the current submatrix
            for (int k = 0; k < subRows; ++k) {
                for (int l = 0; l < subCols; ++l) {
                    currentSum += matrix[i + k][j + l];
                }
            }

            // Update maxSum and coordinates if currentSum is greater
            if (currentSum > maxSum) {
                maxSum = currentSum;
                maxRow = i;
                maxCol = j;
            }
        }
    }

    // Output the largest submatrix
    cout << "The largest submatrix is:\n";
    for (int i = 0; i < subRows; ++i) {
        for (int j = 0; j < subCols; ++j) {
            cout << matrix[maxRow + i][maxCol + j] << " ";
        }
        cout << endl;
    }

    return 0;
}
