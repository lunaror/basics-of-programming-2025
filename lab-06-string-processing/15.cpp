#include <iostream>

using namespace std;

int main() {
    const string text = "This Is The GREAT and MIGHTY";

    int capital_letters = 0;

    for (int i = 0; i < text.length(); i++) {
        if ('A' < text[i] && text[i] < 'Z') {
            capital_letters++;
        }
    }

    cout << capital_letters << endl;

    return 0;
}
