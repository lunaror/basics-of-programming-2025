#include <iostream>

using namespace std;
int main() {
    string big_str = "ajhasdhsadjlh";

    // Use the same approach from the previous lab, but start from 4th character
    // to remove first 4 characters.
    string small_string = big_str.substr(4, big_str.length() - 4);

    cout << small_string << endl;
}
