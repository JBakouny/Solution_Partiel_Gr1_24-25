#include <iostream>
#include <cstdio> // TODO replace iostream by cstdio
// cplusplus.com -> documentation printf et scanf
using namespace std;

void inputArray(int size, int arr[]) {
    for (int i = 0; i < size; ++i)
    {
        cout << "Entrez la valeur " << i+1 << " : ";
        cin >> *(arr + i);
    }
}

void displayArray(int size, int arr[]) {
    cout << "[ ";
    for (int i = 0; i < size; ++i)
    {
        cout << *(arr + i) << " ";
    }
    cout << "]";
}

int main() {
    //const int size = 5;

    //int array[size];
    //inputArray(size, array);
    //cout << "Tableau original : ";
    //cout << endl;
    //displayArray(size, array);

    int x = 10;

    cout << x << endl;
    
    int* p;
    p = &x;
    
    cout << *p << endl;

    *p = 15;
    cout << x << endl;



    return 0;
}