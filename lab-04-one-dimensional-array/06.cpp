#include <iostream>

using namespace std;

int main() {
    int array[10] = {1, 4, -3, 12, 9, 14, 15, 3, 9, 7};

    int max_index = 0;
    int max_value = array[0];

    // Find index of the maximum.
    for (int i = 1; i < 10; i++) {
        if (array[i] > max_value) {
            max_index = i;
            max_value = array[i];
        }
    }

    int min_index = 0;
    int min_value = array[0];

    // Find index of the minimum.
    for (int i = 1; i < 10; i++) {
        if (array[i] < min_value) {
            min_index = i;
            min_value = array[i];
        }
    }

    // Swap minimum and maximum positions.
    array[max_index] = min_value;
    array[min_index] = max_value;

    // Print modified array.
    for (int i = 0; i < 10; i++) {
        cout << array[i] << ", ";
    }
    cout << endl;

    return 0;
}
