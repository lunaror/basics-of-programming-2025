#include <iostream>

using namespace std;

int main() {
    string given = "A AA AA AA this is A stringAAAA";
    int counter = 0;

    // Note compare with length of the string minus 1.
    // String that we need to find ("AA") is 2 characters long, so we need to
    // stop at the second character before the end of the string to stay inside
    // of the bounds of the string.
    for (int i = 0; i < given.length() - 1; i++) {
        if (given[i] == 'A' && given[i + 1] == 'A') {
            counter++;
            // We additionally increment i to skip second 'A' and not count
            // overlapping characters, i.e. "AA" is 1, "AAA" is 1, "AAAA"
            // is 2.
            i++;
        }
    }

    cout << counter << '\n';

    return 0;
}
