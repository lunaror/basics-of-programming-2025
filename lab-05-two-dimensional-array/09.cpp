#include <iostream>

using namespace std;

int main() {
    int A[7][8] = {
        {1, 1, 1, 1, 1, 1, 1, 1}, //
        {2, 2, 2, 2, 2, 2, 2, 2}, //
        {3, 3, 3, 3, 3, 3, 3, 3}, //
        {4, 4, 4, 4, 4, 4, 4, 4}, //
        {5, 5, 5, 5, 5, 5, 5, 5}, //
        {6, 6, 6, 6, 6, 6, 6, 6}, //
        {7, 7, 7, 7, 7, 7, 7, 7}, //
    };

    int tmp;
    for (uint i = 0; i < 8; i++) {
        // As we change values of rows, their indexes stay constant, we just
        // iterate through columns.
        tmp = A[1][i];
        A[1][i] = A[4][i];
        A[4][i] = tmp;
    }

    // Print modified array (not required).
    for (uint i = 0; i < 7; i++) {
        for (uint j = 0; j < 8; j++) {
            cout << A[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}
