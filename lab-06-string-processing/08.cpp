#include <iostream>

using namespace std;

int main() {
    string original = "abcdefg";
    string reversed;

    int length = original.length();
    // Start from the end index (length - 1) and go up to 0.
    for (int i = length - 1; i >= 0; i--) {
        reversed += original[i]; // Append chars.
    }

    cout << reversed << '\n';

    return 0;
}
