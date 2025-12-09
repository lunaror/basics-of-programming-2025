#include <iostream>

using namespace std;

int main() {
    // indexes:   0123456789
    string str = "abcdefghij";
    string new_str;

    for (int i = 0; i < str.length(); i++) {
        if (i != 6 && i != 7) {
            new_str = new_str + str[i];
        }
    }

    cout << new_str << '\n';
}
