#include <iostream>

using namespace std;

int main() {
    int X[10] = {1, 4, -3, 12, 9, 14, -15, 3, -9, 7};

    int Y[10];
    int Z[10];
    // We use this variables to store both index of arrays and number of
    // elements in them.
    int y_index = 0;
    int z_index = 0;

    for (int i = 0; i < 10; i++) {
        // We use two different if statements numbers can be both negative and
        // odd.
        if (X[i] % 2 != 0) {
            Y[y_index] = X[i];
            y_index++;
        }

        if (X[i] < 0) {
            Z[z_index] = X[i];
            z_index++;
        }
    }

    // Print array Y.
    cout << "Y = { ";
    for (int i = 0; i < y_index; i++) {
        cout << Y[i] << ", ";
    }
    cout << "}\n";

    // Print array Z.
    cout << "Z = { ";
    for (int i = 0; i < z_index; i++) {
        cout << Z[i] << ", ";
    }
    cout << "}\n";

    return 0;
}
