#include <iostream>

using namespace std;

int main() {
    string given = "aAbBcCdDeE01020304";
    string odd_pos_string = "";

    for (int i = 0; i < given.length(); i += 2) {
        // Append one letter with index i from to the end of the string.
        odd_pos_string.insert(odd_pos_string.length(), 1, given[i]);
    }

    cout << odd_pos_string << endl;

    return 0;
}
