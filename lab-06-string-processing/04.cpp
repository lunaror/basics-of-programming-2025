#include <iostream>

using namespace std;

int main() {
    string big_str = "ajhasdhsadjlhABC";

    // Small string will be 3 characters shorter than the original one, so we
    // will define it as a substring of original string, minus the last 3
    // characters.
    int small_length = big_str.size() - 3;

    string small_str = big_str.substr(0, small_length);

    // Print original and modified strings.
    cout << big_str << endl;
    cout << small_str << endl;
}
