#include <iostream>

using namespace std;

int main() {
    string given = "aAbBcCdDeE01020304";
    string even_pos_string = "";

    for (int i = 1; i < given.length(); i += 2) {
        // Append one letter with index i from to the end of the string.
        even_pos_string.insert(even_pos_string.length(), 1, given[i]);
    }

    cout << even_pos_string << '\n';

    return 0;
}
