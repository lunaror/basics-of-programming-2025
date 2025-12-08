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

    for (int i = 0; i < 6; i++) {
        // Add values of elements of the second and fourth row.
        sum += A[1][i] + A[3][i];
    }

    cout << "Sum of the second and fourth rows: " << sum << '\n';

    return 0;
}
