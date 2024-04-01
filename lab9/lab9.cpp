#include <iostream>

using namespace std;

int main() {
    int matrix[5][5];
    cout << "Please enter numbers for matrix\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
        }
    }

    int inverseMatrix[5][5];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            inverseMatrix[i][j] = (matrix[j][i] != 0) ? 1 / matrix[j][i] : 0;
        }
    }

    int minElements[5];
    for (int i = 0; i < 5; i++) {
        int minElement = matrix[i][0];
        for (int j = 1; j < 5; j++) {
            if (matrix[i][j] < minElement) {
                minElement = matrix[i][j];
            }
        }
        minElements[i] = minElement;
    }

    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (minElements[i] < minElements[j]) {
                swap(minElements[i], minElements[j]);
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << inverseMatrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 0; i < 5; i++) {
        cout << minElements[i] << " ";
    }
    cout << endl;

    return 0;
}
