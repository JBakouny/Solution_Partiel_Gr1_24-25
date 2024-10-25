#include <iostream>
using namespace std;


const int rows = 3;
const int cols = 3;

void inputMatrix(int matrix[][cols]) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "M(" << i + 1 << ", " << j + 1 << ") : ";
            cin >> matrix[i][j];
        }
    }
}

void sumRows(const int matrix[][cols], int rowSums[]) {
    for (int i = 0; i < rows; ++i) {
        rowSums[i] = 0;
        for (int j = 0; j < cols; ++j) {
            rowSums[i] += matrix[i][j];
        }
    }
}

int findMaxInMatrix(const int matrix[][cols]) {
    int maxVal = matrix[0][0];
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (matrix[i][j] > maxVal) {
                maxVal = matrix[i][j];
            }
        }
    }
    return maxVal;
}

void displayMatrix(const int matrix[][cols]) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {

    int matrix[rows][cols];
    inputMatrix(matrix);
    cout << "Matrice originale :";
    cout << endl;
    displayMatrix(matrix);

    int rowSums[rows];
    sumRows(matrix, rowSums);
    cout << "Somme des elements ";
    cout << "de chaque ligne : " << endl;
    for (int i = 0; i < rows; i++) {
        cout << rowSums[i] << " ";
    }
    cout << endl;

    int maxVal = findMaxInMatrix(matrix);
    cout << "Valeur maximale ";
    cout <<"de la matrice : ";
    cout << maxVal << endl;

    return 0;
}