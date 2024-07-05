/* Write a program in C++ for multiplication of two sparse matrices using Pointers. */

#include <iostream>
using namespace std;

// Function to multiply two sparse matrices
void multiplySparseMatrices(int *matA[], int *matB[], int *result[], int rowsA, int colsA, int colsB) {
    // Initialize the result matrix with zeros
    for (int i = 0; i < rowsA; ++i) {
        for (int j = 0; j < colsB; ++j) {
            result[i][j] = 0;
        }
    }

    // Perform matrix multiplication
    for (int i = 0; i < rowsA; ++i) {
        for (int j = 0; j < colsB; ++j) {
            for (int k = 0; k < colsA; ++k) {
                result[i][j] += matA[i][k] * matB[k][j];
            }
        }
    }
}

int main() {
    const int rowsA = 2, colsA = 3;
    const int rowsB = 3, colsB = 2;

    // Sparse matrices in 2D arrays
    int matrixA[rowsA][colsA] = { {1, 0, 0},
                                  {0, 0, 2} };

    int matrixB[rowsB][colsB] = { {0, 1},
                                  {2, 0},
                                  {0, 0} };

    // Result matrix
    int result[rowsA][colsB] = {0};

    // Arrays of pointers to sparse matrices
    int* matA[rowsA];
    int* matB[rowsB];
    int* res[rowsA];

    // Assign the pointers to the rows of the sparse matrices
    for (int i = 0; i < rowsA; ++i) {
        matA[i] = matrixA[i];
        res[i] = result[i];
    }

    for (int i = 0; i < rowsB; ++i) {
        matB[i] = matrixB[i];
    }

    // Multiply the sparse matrices using pointers
    multiplySparseMatrices(matA, matB, res, rowsA, colsA, colsB);

    // Display the result matrix
    cout << "Result matrix:\n";
    for (int i = 0; i < rowsA; ++i) {
        for (int j = 0; j < colsB; ++j) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
