#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int array[20] = {1, 4, -3,  2, 9, 4, 1,  3, 9, 7,
                     4, 6, -45, 4, 3, 2, -2, 4, 1, 7};
    long long product = 1;
    int elements = 0;

    for (int i = 0; i < 20; i++) {
        if (array[i] > 0) { // Check if element is positive.
            product *= array[i];
            elements++;
        }
    }

    // To find geometrical mean we should use formula n√p, where
    // n - number of elements
    // p - product of elements
    // We use power 1/n to compute root. Additionally we put dot (.) after 1 to
    // make the value float.
    float geometrical_mean = pow(product, 1. / elements);

    cout << geometrical_mean << '\n';

    return 0;
}
