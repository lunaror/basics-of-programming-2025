#include <iostream>

using namespace std;

int main() {
    int counter = 0;
    string text = "AY BABA BU BU BU ELEME";

    int length = text.length();

    for (int i = 0; i < length; i++) {
        if (text[i] == 'B') {
            counter++;
        }
    }

    cout << counter << endl;
}
