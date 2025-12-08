#include <iostream>

using namespace std;

int main() {
    int B[10] = {1, 4, -3, 12, 9, 14, 15, 3, 9, 7};

    int max_index = 0;
    int max_value = B[0];

    for (int i = 1; i < 10; i++) {
        if (B[i] > max_value) {
            max_index = i;
            max_value = B[i];
        }
    }

    cout << "Maximum index: " << max_index << '\n';
    cout << "Maximum value: " << max_value << '\n';

    B[max_index] = 44;

    // Print modified array.
    for (int i = 0; i < 10; i++) {
        cout << B[i] << ", ";
    }
    cout << '\n';

    return 0;
}
