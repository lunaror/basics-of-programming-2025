#include <iostream>

using namespace std;

int main() {
    int counter = 0;
    string text = "ay baba bu bu bu eleme";

    int length = text.length();

    for (int i = 0; i < length; i++) {
        if (text[i] == 'b') {
            counter++;
        }
    }

    cout << counter << endl;
}
