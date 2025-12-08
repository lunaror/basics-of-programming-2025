#include <iostream>

using namespace std;

int main() {
    int A[8][4] = {
        {3, 7, 6, 2}, //
        {5, 8, 2, 9}, //
        {5, 4, 8, 7}, //
        {6, 8, 8, 7}, //
        {2, 7, 5, 3}, //
        {7, 8, 9, 7}, //
        {7, 8, 9, 7}, //
        {2, 1, 7, 5}, //
    };

    int top_2_rows_min = A[0][0];
    int first_3_columns_min = A[0][0];

    // Top two rows have indexes 0 and 1, so we iterate in [0; 2) range.
    for (int r = 0; r < 2; r++) {
        for (int c = 0; c < 4; c++) {
            if (top_2_rows_min > A[r][c]) {
                top_2_rows_min = A[r][c];
            }
        }
    }

    for (int r = 0; r < 8; r++) {
        // First three columns have indexes 0, 1 and 2, so we iterate in [0; 3)
        // range.
        for (int c = 0; c < 3; c++) {
            if (first_3_columns_min > A[r][c]) {
                first_3_columns_min = A[r][c];
            }
        }
    }

    cout << "Minimum of the top two rows: " << top_2_rows_min << '\n';
    cout << "Minimum of the first three columns: " << first_3_columns_min
         << '\n';

    return 0;
}
