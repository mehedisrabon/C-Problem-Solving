#include <iostream>

using namespace std;

const int MAX_SIZE = 100;


void transpose(const int mat[][MAX_SIZE], int trans[][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            trans[i][j] = mat[j][i];
        }
    }
}

void addMatrices(const int mat1[][MAX_SIZE], const int mat2[][MAX_SIZE], int result[][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}


void subtractMatrices(const int mat1[][MAX_SIZE], const int mat2[][MAX_SIZE], int result[][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}


void multiplyMatrices(const int mat1[][MAX_SIZE], const int mat2[][MAX_SIZE], int result[][MAX_SIZE], int rows1, int cols1, int cols2) {
    for (int i = 0; i < cols1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < rows1; k++) {
                result[i][j] += mat1[i][k] * mat2[j][k];
            }
        }
    }
}

void displayMatrix(const int mat[][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows1, cols1, rows2, cols2;

    cout << "Enter the number of rows and columns of matrix 1: ";
    cin >> rows1 >> cols1;

    int mat1[MAX_SIZE][MAX_SIZE];

    cout << "Enter the elements of matrix 1:" << endl;
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            cin >> mat1[i][j];
        }
    }

    cout << "Enter the number of rows and columns of matrix 2: ";
    cin >> rows2 >> cols2;

    int mat2[MAX_SIZE][MAX_SIZE];

    cout << "Enter the elements of matrix 2:" << endl;
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            cin >> mat2[i][j];
        }
    }

    if (cols1 != cols2) {
        cout << "Matrices are not compatible for multiplication." << endl;
        return 0;
    }

    int trans1[MAX_SIZE][MAX_SIZE];
    int trans2[MAX_SIZE][MAX_SIZE];

    transpose(mat1, trans1, rows1, cols1);
    transpose(mat2, trans2, rows2, cols2);

    cout << "Transpose of matrix 1:" << endl;
    displayMatrix(trans1, cols1, rows1);

    cout << "Transpose of matrix 2:" << endl;
    displayMatrix(trans2, cols2, rows2);

    int result_addition[MAX_SIZE][MAX_SIZE];
    int result_subtraction[MAX_SIZE][MAX_SIZE];
    int result_multiplication[MAX_SIZE][MAX_SIZE];

    cout << "Addition of transpose matrices:" << endl;
    addMatrices(trans1, trans2, result_addition, cols1, rows1);
    displayMatrix(result_addition, rows1, cols1);

    cout << "Subtraction of transpose matrices:" << endl;
    subtractMatrices(trans1, trans2, result_subtraction, cols1, rows1);
    displayMatrix(result_subtraction, rows1, cols1);

    cout << "Multiplication of transpose matrices:" << endl;
    multiplyMatrices(trans1, trans2, result_multiplication, cols1, cols1, rows1);
    displayMatrix(result_multiplication, cols1, cols1);

    return 0;
}
