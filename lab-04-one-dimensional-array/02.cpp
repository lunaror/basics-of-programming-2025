#include <iostream>

using namespace std;

int main() {
    int array[8] = {1, 4, -3, 12, 9, 14, 15, 3};

    int sum = 0;

    // Find sum of all elements of the array.
    for (uint i = 0; i < 8; i++) {
        sum += array[i];
    }

    // Divide by number of elements to find arithmetical mean (ədədi orta).
    cout << (float)sum / 8 << '\n';

    return 0;
}
