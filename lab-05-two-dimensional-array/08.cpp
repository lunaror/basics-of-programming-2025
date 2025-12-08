#include <iostream>

using namespace std;

int main() {
    int A[6][6] = {
        {5, 2, 4, 9, 1, 3}, //
        {3, 4, 7, 7, 9, 4}, //
        {7, 1, 1, 9, 4, 7}, //
        {6, 1, 5, 7, 3, 2}, //
        {5, 8, 2, 1, 1, 2}, //
        {5, 2, 3, 4, 7, 7}, //
    };

    int sum = 0;
    int elements = 6 * 3; // Calculate number of elements.

    for (int r = 0; r < 6; r++) {     // We count all rows...
        for (int c = 3; c < 6; c++) { // ...but only right half of the columns,
            sum += A[r][c];           // starting from the middle (3)
        }
    }

    cout << "Arithmetical mean of the right half of the matrix: "
         << (float)sum / elements << '\n';

    return 0;
}
