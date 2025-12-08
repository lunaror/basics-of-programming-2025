#include <iostream>

using namespace std;

int main() {
    int A[13][10] = {
        {8, 5, 3, 5, 5, 7, 7, 9, 9, 2}, //
        {6, 2, 6, 3, 2, 8, 7, 5, 5, 6}, //
        {8, 1, 4, 1, 3, 7, 4, 7, 1, 8}, //
        {1, 8, 3, 2, 6, 1, 5, 2, 2, 2}, //
        {9, 9, 1, 3, 1, 8, 7, 9, 3, 7}, //
        {3, 2, 3, 8, 7, 3, 9, 5, 8, 5}, //
        {4, 5, 9, 7, 3, 6, 3, 6, 6, 1}, //
        {1, 6, 4, 2, 7, 7, 2, 5, 7, 9}, //
        {7, 6, 7, 6, 7, 8, 1, 1, 5, 9}, //
        {9, 4, 4, 6, 6, 8, 9, 2, 2, 7}, //
        {5, 4, 6, 3, 5, 9, 4, 6, 8, 1}, //
        {9, 4, 9, 1, 5, 8, 9, 7, 9, 7}, //
    };

    int sum;
    for (int i = 0; i < 13; i++) {
        sum += A[0][i];
    }

    // We define minimum value as the first element of the second row.
    // Then we iterate over the row. If we find value that is less than our
    // current mininum, it becomes new minimum.
    int min_row_2 = A[1][0];

    for (int i = 1; i < 10; i++) {
        if (A[1][i] < min_row_2) {
            min_row_2 = A[1][i];
        }
    }

    cout << "Sum of elements in first column: " << sum << '\n';
    cout << "Minimum value of the second row: " << min_row_2 << '\n';

    return 0;
}
