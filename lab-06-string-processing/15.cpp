#include <iostream>

using namespace std;

int main() {
    const string text = "This Is The GREAT and MIGHTY";

    uint capital_letters = 0;

    for (uint i = 0; i < text.length(); i++) {
        if ('A' < text[i] && text[i] < 'Z') {
            capital_letters++;
        }
    }

    cout << capital_letters << '\n';

    return 0;
}
