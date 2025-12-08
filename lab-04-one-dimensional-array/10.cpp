#include <iostream>

using namespace std;

int main() {
    int array[10] = {1, 4, -3, -12, 9, 14, 15, 3, 9, 7};

    int even_elements = 0;

    for (int i = 0; i < 10; i++) {
        if (array[i] % 2 == 0) {
            even_elements++;
        }
    }

    cout << even_elements << '\n';

    return 0;
}
