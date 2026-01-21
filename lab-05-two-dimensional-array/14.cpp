#include <iostream>

using namespace std;

int main() {
    int A[8][6] = {
        {3, 7, 6, 2, 9, 8}, //
        {5, 8, 2, 9, 7, 4}, //
        {5, 4, 8, 7, 4, 9}, //
        {6, 8, 8, 7, 4, 4}, //
        {2, 7, 5, 3, 9, 4}, //
        {7, 8, 9, 7, 9, 6}, //
        {7, 8, 9, 7, 9, 3}, //
        {2, 2, 7, 5, 5, 4}, //
    };

    int sum = 0;

    for (int r = 0; r < 8; r++) {
        // First three columns have indexes 0, 1 and 2, so we iterate in [0; 3)
        // range.
        for (int c = 0; c < 3; c++) {
            sum += A[r][c];
        }
    }

    // Last two rows have indexes 6 and 7, so we iterate in [6; 8) range.
    for (int r = 6; r < 8; r++) {
        for (int c = 0; c < 6; c++) {
            sum += A[r][c];
        }
    }

    cout << "Total sum of first 3 columns and last 2 rows: " << sum << endl;

    return 0;
}
