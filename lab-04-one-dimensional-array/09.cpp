#include <iostream>

using namespace std;

int main() {
    int array[10] = {1, 4, -3, 12, 9, 14, 15, 3, 9, 7};

    int sum = 0;
    uint elements = 0;

    for (uint i = 0; i < 10; i++) {
        if (array[i] % 3 == 0) { // Check if element is divisible by 3.
            sum += array[i];
            elements++;
        }
    }

    // Find arithmetical mean. We use (float) before the variable to make the
    // result float.
    cout << (float)sum / elements << endl;

    return 0;
}
