#include <iostream>
using namespace std;

struct Element {
    int row, col, val;
};

int main() {
    int m, n, num, k = 0;
    cout << "Enter number of rows and columns: ";
    cin >> m >> n;
    int mat[m][n];
    cout << "Enter elements (0 for sparse):\n";
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> mat[i][j];
    // Count non-zero elements
    num = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (mat[i][j] != 0)
                num++;
    Element sparse[num+1];
    sparse[0] = {m, n, num};
    k = 1;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (mat[i][j] != 0)
                sparse[k++] = {i, j, mat[i][j]};
    cout << "\nSparse Matrix Representation (row col value):\n";
    for (int i = 0; i <= num; i++)
        cout << sparse[i].row << " " << sparse[i].col << " " << sparse[i].val << endl;
    return 0;
} 