#include <iostream>

using namespace std;

int main() {
    string given = "ABA AA ABA this is stringABABAB";
    int counter = 0;

    // Note compare with length of the string minus 2.
    for (int i = 0; i < given.length() - 2; i++) {
        if (given[i] == 'A' && given[i + 1] == 'B' && given[i + 2] == 'A') {
            counter++;
            // We additionally increment i to not count overlapping characters.
            i += 2;
        }
    }

    cout << counter << endl;

    return 0;
}
