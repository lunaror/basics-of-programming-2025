#include <iostream>

using namespace std;

int main() {
    int A[8][6] = {
        {6, 3, 9, 2, 4, 8}, //
        {9, 3, 7, 9, 3, 2}, //
        {6, 3, 4, 8, 5, 7}, //
        {7, 4, 5, 8, 2, 9}, //
        {4, 3, 1, 5, 6, 4}, //
        {9, 4, 9, 4, 9, 8}, //
        {2, 6, 4, 1, 4, 5}, //
        {3, 3, 4, 5, 7, 1}, //
    };

    int sum = 0;

    // Find sum of the first row.
    for (int i = 0; i < 6; i++) {
        sum += A[0][i];
    }

    // Add sum of the second column.
    for (int i = 0; i < 8; i++) {
        sum += A[i][1];
    }

    cout << sum << endl;

    return 0;
}
