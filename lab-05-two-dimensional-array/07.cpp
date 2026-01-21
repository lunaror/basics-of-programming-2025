#include <iostream>

using namespace std;

int main() {
    int A[4][4] = {
        {5, 2, 4, 9}, //
        {3, 4, 7, 7}, //
        {7, 1, 1, 9}, //
        {6, 1, 5, 7}, //
    };

    int sum = 0;

    for (int r = 0; r < 4; r++) {     // We count all rows...
        for (int c = 0; c < 2; c++) { // ...but only half of the columns (4/2)
            sum += A[r][c];
        }
    }

    cout << "Sum of the left half: " << sum << endl;

    return 0;
}
