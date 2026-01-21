#include <iostream>

using namespace std;

int main() {
    int array[10] = {1, 4, -3, 12, 9, 14, 15, 3, 9, 7};

    int max_index = 0;
    int max_value = array[0];

    // We start from 1 because we defined maximum as the first element of the
    // array (i.e. array[0]). If we find value that is bigger than our current
    // maximum, it becomes the new maximum.
    for (int i = 1; i < 10; i++) {
        if (array[i] > max_value) {
            max_index = i;
            max_value = array[i];
        }
    }

    cout << "Maximum index: " << max_index << endl;
    cout << "Maximum value: " << max_value << endl;

    return 0;
}
