#include <iostream>
using namespace std;

// Define a struct to represent a sparse matrix element
struct SparseMatrix {
    int row;    // Row index of the element
    int col;    // Column index of the element
    int value;  // Value of the element
};

// Function to create a sparse matrix from a given dense matrix
SparseMatrix* createSparseMatrix(int** matrix, int numRows, int numCols) {
    int numNonZero = 0;  // Count of non-zero elements in the matrix

    // Count the non-zero elements in the dense matrix
    for (int i = 0; i < numRows; ++i) {
        for (int j = 0; j < numCols; ++j) {
            if (matrix[i][j] != 0) {
                numNonZero++;
            }
        }
    }

    // Create an array of SparseMatrix structs to store the non-zero elements
    SparseMatrix* sparse = new SparseMatrix[numNonZero + 1];

    // Store metadata in the first element (index 0) of the sparse matrix
    sparse[0].row = numRows;
    sparse[0].col = numCols;
    sparse[0].value = numNonZero;

    int count = 1;  // Counter for iterating through the sparse matrix

    // Populate the sparse matrix with non-zero elements
    for (int i = 0; i < numRows; ++i) {
        for (int j = 0; j < numCols; ++j) {
            if (matrix[i][j] != 0) {
                sparse[count].row = i;
                sparse[count].col = j;
                sparse[count].value = matrix[i][j];
                count++;
            }
        }
    }

    return sparse;
}

// Function to print a sparse matrix
void printSparseMatrix(SparseMatrix* sparse) {
    int numRows = sparse[0].row;
    int numCols = sparse[0].col;
    int numNonZero = sparse[0].value;

    cout << "Sparse Matrix:" << endl;
    cout << "Row\tColumn\tValue" << endl;

    // Iterate through the sparse matrix and print its elements
    for (int i = 0; i <= numNonZero; ++i) {
        cout << sparse[i].row << "\t" << sparse[i].col << "\t" << sparse[i].value << endl;
    }
}

// Function to multiply two sparse matrices
void multiplySparseMatrices(SparseMatrix* A, SparseMatrix* B) {
    int numRowsA = A[0].row;
    int numColsA = A[0].col;
    int numRowsB = B[0].row;
    int numColsB = B[0].col;

    // Check if matrix multiplication is possible
    if (numColsA != numRowsB) {
        cout << "Matrix multiplication not possible!" << endl;
        return;
    }

    // Create a result matrix to store the multiplication result
    int** result = new int*[numRowsA];
    for (int i = 0; i < numRowsA; ++i) {
        result[i] = new int[numColsB];

        // Initialize result matrix elements to zero
        for (int j = 0; j < numColsB; ++j) {
            result[i][j] = 0;

            // Iterate through sparse matrices A and B and perform multiplication
            for (int k = 1; k <= A[0].value; ++k) {
                if (A[k].row == i && B[k].col == j) {
                    result[i][j] += A[k].value * B[k].value;
                }
            }
        }
    }

    // Print the resultant matrix
    cout << "Resultant Matrix:" << endl;
    for (int i = 0; i < numRowsA; ++i) {
        for (int j = 0; j < numColsB; ++j) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    // Clean up dynamically allocated memory
    for (int i = 0; i < numRowsA; ++i) {
        delete[] result[i];
    }
    delete[] result;
}

int main() {
    int numRowsA, numColsA, numRowsB, numColsB;

    // Input matrix dimensions
    cout << "Enter the number of rows and columns for Matrix A: ";
    cin >> numRowsA >> numColsA;

    cout << "Enter the number of rows and columns for Matrix B: ";
    cin >> numRowsB >> numColsB;

    // Check if matrix multiplication is possible
    if (numColsA != numRowsB) {
        cout << "Matrix multiplication not possible!" << endl;
        return 1;
    }

    // Allocate memory for dense matrices
    int** matrixA = new int*[numRowsA];
    int** matrixB = new int*[numRowsB];

    // Input elements for Matrix A
    cout << "Enter the elements of Matrix A:" << endl;
    for (int i = 0; i < numRowsA; ++i) {
        matrixA[i] = new int[numColsA];
        for (int j = 0; j < numColsA; ++j) {
            cin >> matrixA[i][j];
        }
    }

    // Input elements for Matrix B
    cout << "Enter the elements of Matrix B:" << endl;
    for (int i = 0; i < numRowsB; ++i) {
        matrixB[i] = new int[numColsB];
        for (int j = 0; j < numColsB; ++j) {
            cin >> matrixB[i][j];
        }
    }

    // Create sparse matrices from dense matrices
    SparseMatrix* sparseA = createSparseMatrix(matrixA, numRowsA, numColsA);
    SparseMatrix* sparseB = createSparseMatrix(matrixB, numRowsB, numColsB);

    // Print sparse matrices
    cout << "Sparse Matrix A:" << endl;
    printSparseMatrix(sparseA);

    cout << "Sparse Matrix B:" << endl;
    printSparseMatrix(sparseB);

    // Multiply sparse matrices and print the result
    multiplySparseMatrices(sparseA, sparseB);

    // Clean up dynamically allocated memory
    for (int i = 0; i < numRowsA; ++i) {
        delete[] matrixA[i];
    }
    delete[] matrixA;

    for (int i = 0; i < numRowsB; ++i) {
        delete[] matrixB[i];
    }
    delete[] matrixB;

    delete[] sparseA;
    delete[] sparseB;

    return 0;
}
