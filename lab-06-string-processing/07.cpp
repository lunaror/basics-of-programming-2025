#include <iostream>

using namespace std;

int main() {
    string first = "qwertyuiop";
    string second = "123asdfghjkl";

    string first_three_chars = second.substr(0, 3);

    string final = first + first_three_chars;

    cout << final << endl;

    return 0;
}
