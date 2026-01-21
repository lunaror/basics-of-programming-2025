#include <iostream>

using namespace std;

int main() {
    int array[10] = {1, 4, -3, 12, 9, 14, 15, 3, 9, 7};

    int sum = 0;

    // Add value of every element of the array to the sum.
    for (int i = 0; i < 10; i++) {
        sum += array[i];
    }

    cout << sum << '\n';

    return 0;
}
