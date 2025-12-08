#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int array[20] = {1, 4, -3, 2, 9, 4, 5,  3, 9, 7,
                     4, 6, 4,  4, 3, 2, -5, 4, 9, 7};
    // Product of all values will be very big, so we will store it using long
    // long type.
    long long product = 1;
    int elements = 0;

    for (int i = 0; i < 20; i++) {
        if (array[i] % 7 != 0) { // Check if element is not divisible by 7.
            cout << array[i] << '\n';
            product *= array[i];
            elements++;
        }
    }

    // To find geometrical mean we should use formula n√p, where
    // n - number of elements
    // p - product of elements
    // We use power 1/n to compute root. Also we put dot (.) after 1 to make
    // the value float.
    float geometrical_mean = pow(abs(product), 1. / elements);

    cout << geometrical_mean << '\n';

    return 0;
}
