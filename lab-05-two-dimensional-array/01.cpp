#include <iostream>

using namespace std;

int main() {
    int A[3][5] = {
        {1, 2, 3, 4, 5}, // row 0
        {6, 7, 8, 9, 0}, // row 1
        {1, 2, 3, 4, 5}, // row 2
    };

    int sum = 0;
    // First we access the rows, then the columns.
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 5; c++) {
            sum += A[r][c];
        }
    }

    cout << sum << endl;

    return 0;
}
