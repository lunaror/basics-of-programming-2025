#include <iostream>

using namespace std;

int main() {
    int A[8][8] = {
        {5, 2, 4, 9, 1, 3, 3, 6}, // row 1 index 0
        {3, 4, 7, 7, 9, 4, 2, 8}, // row 2 index 1 +
        {7, 1, 1, 9, 4, 7, 3, 4}, // row 3 index 2
        {6, 1, 5, 7, 3, 2, 4, 3}, // row 4 index 3 +
        {5, 8, 2, 1, 1, 2, 3, 7}, // row 5 index 4
        {5, 2, 3, 4, 7, 7, 9, 2}, // row 6 index 5 +
        {2, 1, 8, 4, 6, 5, 1, 1}, // row 7 index 6
        {4, 2, 9, 1, 6, 3, 2, 5}, // row 8 index 7 +
    };

    int sum = 0;
    // Iterate through even rows (even rows have odd indexes).
    for (int r = 1; r < 8; r += 2) {
        for (int c = 0; c < 8; c++) {
            sum += A[r][c];
        }
    }

    cout << "Sum of elements in even rows: " << sum << endl;

    return 0;
}
