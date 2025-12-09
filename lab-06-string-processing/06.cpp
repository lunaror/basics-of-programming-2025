#include <iostream>

using namespace std;

int main() {
    string first = "abc1234";
    string second = "def5678";

    // Use the same approach as in two previous tasks.
    string last_four_chars = second.substr(second.size() - 4, 4);

    string final = first + last_four_chars;

    cout << final << '\n';
}
