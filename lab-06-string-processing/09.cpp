#include <iostream>

using namespace std;

int main() {
    string given = "aAbBcCdDeE01020304";
    string even_pos_string = "";

    // Note that in this case we start from 1, not from 0, as 1 the first even
    // position (2nd position).
    for (int i = 1; i < given.length(); i += 2) {
        // Append one letter with index i from to the end of the string.
        even_pos_string.insert(even_pos_string.length(), 1, given[i]);
    }

    cout << even_pos_string << endl;

    return 0;
}
