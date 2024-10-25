#include <iostream>
using namespace std;

void inputArray(int size, int array[]) {
    for (int i = 0; i < size; ++i) {
        cout << "Entrez la valeur " << i + 1 << " : ";
        cin >> array[i];
    }
}

int sumArray(int size, const int array[]) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += array[i];
    }
    return sum;
}

int findMax(int size, const int array[]) {
    int maxVal = array[0];
    for (int i = 1; i < size; ++i) {
        if (array[i] > maxVal) {
            maxVal = array[i];
        }
    }
    return maxVal;
}

void copyArray(int size, const int source[], int destination[]) {
    for (int i = 0; i < size; ++i) {
        destination[i] = source[i];
    }
}

void swapElements(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void reverseArrayInPlace(int size, int array[]) {
    for (int i = 0; i < size / 2; ++i) {
        swapElements(array[i], array[size - i - 1]);
    }
}

void displayArray(int size, const int array[]) {
    cout << "[ ";
    for (int i = 0; i < size; ++i) {
        cout << array[i] << " ";
    }
    cout << "]" << endl;
}

int main() {
    const int size = 5;

    int array[size];
    inputArray(size, array);
    cout << "Tableau original : ";
    cout << endl;
    displayArray(size, array);

    int sum = sumArray(size, array);
    cout << "Somme des elements : ";
    cout << sum << endl;

    int maxVal = findMax(size, array);
    cout << "Valeur maximale : ";
    cout << maxVal << endl;

    int copiedArray[size];
    copyArray(size, array, copiedArray);
    cout << "Tableau copie : ";
    cout << endl;
    displayArray(size, copiedArray);

    reverseArrayInPlace(size, array);
    cout << "Tableau inverse en place : ";
    cout << endl;
    displayArray(size, array);
    cout << "La copie precedente reste intacte:";
    cout << endl;
    displayArray(size, copiedArray);
    return 0;
}