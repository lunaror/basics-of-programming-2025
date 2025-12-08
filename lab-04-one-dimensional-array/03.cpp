#include <iostream>

using namespace std;

int main() {
    int array[7] = {1, 2, 3, 4, 5, 6, 7};
    int copied[7];

    // Reverse the array.
    for (int i = 0; i < 7; i++) {
        // We substitute from 6 because 7th index is 6.
        copied[i] = array[6 - i];
    }

    // Print copied array.
    for (int i = 0; i < 7; i++) {
        cout << copied[i] << ", ";
    }
    cout << '\n';

    return 0;
}
