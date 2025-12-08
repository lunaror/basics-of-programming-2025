#include <iostream>

using namespace std;

int main() {
    int A[7][8] = {
        {5, 2, 4, 9, 1, 3, 3, 6}, //
        {3, 4, 7, 7, 9, 4, 2, 8}, //
        {7, 1, 1, 9, 4, 7, 3, 4}, //
        {6, 1, 5, 7, 3, 2, 4, 3}, //
        {5, 8, 2, 1, 1, 2, 3, 7}, //
        {5, 2, 3, 4, 7, 7, 9, 2}, //
        {2, 1, 8, 4, 6, 5, 1, 1}, //
    };

    // Find minimum of the third row.
    int third_row_min = A[2][0];
    for (int i = 1; i < 8; i++) {
        if (third_row_min > A[2][i]) {
            third_row_min = A[2][i];
        }
    }

    // Find maximum element of the fourth column.
    int fourth_column_max = A[0][3];
    for (int i = 1; i < 7; i++) {
        if (fourth_column_max < A[i][3]) {
            fourth_column_max = A[i][3];
        }
    }

    cout << "Minimum of the third row: " << third_row_min << '\n';
    cout << "Maximum of the fourth row: " << fourth_column_max << '\n';

    return 0;
}
