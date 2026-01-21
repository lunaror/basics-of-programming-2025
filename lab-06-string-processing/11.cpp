#include <iostream>

using namespace std;

int main() {
    const string first_str = "The message from the great and mighty";
    const string second_str = "AEEEEEEEEE.";

    string resulting = first_str.substr(5, 3) + second_str;

    cout << resulting << endl;

    return 0;
}
