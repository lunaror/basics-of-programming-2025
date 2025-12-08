#include <iostream>

using namespace std;

int main() {
    int A[3] = {2, 3, 4};
    int B[3] = {4, 5, 6};

    int product = 0;

    for (int i = 0; i < 3; i++) {
        product += A[i] * B[i];
    }

    cout << "Scalar product of A and B = " << product << '\n';

    return 0;
}
