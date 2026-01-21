#include <iostream>

using namespace std;

int main() {
    int array[10] = {1, 4, -3, 12, 9, 14, -15, 3, -9, 7};

    int R[10];
    int P[10];
    // We use this variables to store both index of arrays and number of
    // elements in them.
    int r_index = 0;
    int p_index = 0;

    for (int i = 0; i < 10; i++) {
        if (array[i] > 0) {
            R[r_index] = array[i];
            r_index++;
        } else if (array[i] < 0) {
            P[p_index] = array[i];
            p_index++;
        }
    }

    // Print array R.
    cout << "R = { ";
    for (int i = 0; i < r_index; i++) {
        cout << R[i] << ", ";
    }
    cout << "}" << endl;

    // Print array P.
    cout << "P = { ";
    for (int i = 0; i < p_index; i++) {
        cout << P[i] << ", ";
    }
    cout << "}" << endl;

    return 0;
}
