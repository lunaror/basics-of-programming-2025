#include <iostream>

using namespace std;

int main() {
    int A[10][10] = {
        {3, 7, 6, 2, 9, 8, 2, 1, 6, 1}, //
        {5, 8, 2, 9, 7, 4, 3, 8, 6, 7}, //
        {5, 4, 8, 7, 4, 9, 2, 6, 5, 2}, //
        {6, 8, 8, 7, 4, 4, 9, 7, 8, 3}, //
        {2, 7, 5, 3, 9, 4, 4, 2, 5, 7}, //
        {7, 8, 9, 7, 9, 6, 7, 6, 5, 8}, //
        {7, 8, 9, 7, 9, 3, 8, 2, 9, 5}, //
        {2, 2, 7, 5, 5, 4, 9, 8, 6, 3}, //
        {9, 2, 9, 5, 8, 8, 5, 4, 6, 3}, //
        {8, 4, 9, 2, 2, 4, 7, 8, 2, 9}, //
    };

    // Upper half start is first row till the fifth row.
    int upper_half_min = A[0][0];
    for (int r = 0; r < 5; r++) {
        for (int c = 0; c < 10; c++) {
            if (upper_half_min > A[r][c]) {
                upper_half_min = A[r][c];
            }
        }
    }

    // Lower half start is sixth row till the tenth row.
    int lower_half_min = A[5][0];
    for (int r = 5; r < 10; r++) {
        for (int c = 0; c < 10; c++) {
            if (lower_half_min > A[r][c]) {
                lower_half_min = A[r][c];
            }
        }
    }

    cout << "Upper half minimum: " << upper_half_min << '\n';
    cout << "Lower half minimum: " << lower_half_min << '\n';

    return 0;
}
