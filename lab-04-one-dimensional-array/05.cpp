#include <iostream>

using namespace std;

int main() {
    int array[10] = {1, 4, -3, 12, 9, 14, 15, 3, 9, 7};

    int min_index = 0;
    int min_value = array[0];

    // We start from 1 because we defined minimum as the first element of the
    // array (i.e. array[0]). If we find value that is smaller than our current
    // minimum, it becomes the new minimum.
    for (int i = 1; i < 10; i++) {
        if (array[i] < min_value) {
            min_index = i;
            min_value = array[i];
        }
    }

    cout << "Minimum index: " << min_index << endl;
    cout << "Minimum value: " << min_value << endl;

    // Replace the minimum with 555.
    array[min_index] = 555;

    // Print modified array.
    for (int i = 0; i < 10; i++) {
        cout << array[i] << ", ";
    }
    cout << endl;

    return 0;
}
