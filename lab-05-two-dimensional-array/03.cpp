#include <iostream>

using namespace std;

int main() {
    int A[7][8] = {
        {1, 2, 3, 4, 5, 6, 7, 8}, //
        {1, 2, 3, 4, 5, 6, 7, 8}, //
        {1, 2, 3, 4, 5, 6, 7, 8}, //
        {1, 2, 3, 4, 5, 6, 7, 8}, //
        {1, 2, 3, 4, 5, 6, 7, 8}, //
        {1, 2, 3, 4, 5, 6, 7, 8}, //
        {1, 2, 3, 4, 5, 6, 7, 8}, //
    };

    int tmp;
    for (uint i = 0; i < 6; i++) {
        tmp = A[i][0];
        A[i][0] = A[i][4];
        A[i][4] = tmp;
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
