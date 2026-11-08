#include <iostream>
using namespace std;

void inputMatrix(int mat[3][3], int r, int c) {
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            cin >> mat[i][j];
        }
    }
}

void displayMatrix(int mat[3][3], int r, int c) {
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

void addMatrices(int a[3][3], int b[3][3], int res[3][3], int r, int c) {
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            res[i][j] = a[i][j] + b[i][j];
        }
    }
}

void subtractMatrices(int a[3][3], int b[3][3], int res[3][3], int r, int c) {
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            res[i][j] = a[i][j] - b[i][j];
        }
    }
}

void multiplyMatrices(int a[3][3], int b[3][3], int res[3][3], int r1, int c1, int c2) {
    for(int i=0; i<r1; i++) {
        for(int j=0; j<c2; j++) {
            res[i][j] = 0;
            for(int k=0; k<c1; k++) {
                res[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void transposeMatrix(int a[3][3], int res[3][3], int r, int c) {
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            res[j][i] = a[i][j];
        }
    }
}

int main() {
    int a[3][3], b[3][3], res[3][3];
    int choice;
    cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Transpose\nEnter choice: ";
    cin >> choice;
    if (choice >= 1 && choice <= 3) {
        cout << "Enter Matrix A (3x3):\n";
        inputMatrix(a, 3, 3);
        cout << "Enter Matrix B (3x3):\n";
        inputMatrix(b, 3, 3);
    } else if (choice == 4) {
        cout << "Enter Matrix A (3x3):\n";
        inputMatrix(a, 3, 3);
    }
    switch(choice) {
        case 1:
            addMatrices(a, b, res, 3, 3);
            cout << "Result:\n";
            displayMatrix(res, 3, 3);
            break;
        case 2:
            subtractMatrices(a, b, res, 3, 3);
            cout << "Result:\n";
            displayMatrix(res, 3, 3);
            break;
        case 3:
            multiplyMatrices(a, b, res, 3, 3, 3);
            cout << "Result:\n";
            displayMatrix(res, 3, 3);
            break;
        case 4:
            transposeMatrix(a, res, 3, 3);
            cout << "Result:\n";
            displayMatrix(res, 3, 3);
            break;
        default:
            cout << "Invalid choice";
    }
    return 0;
}
