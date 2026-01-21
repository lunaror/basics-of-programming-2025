#include <iostream>

using namespace std;

int main() {
    string str = "s 2123d dADadada tadadada s ss";
    int counter = 0;

    // Here we use str.length() directly, but be aware that Vaqif m doesn't like
    // this approach. For exams it is better to use str.length() inside
    // another variable, i.e.:
    //
    // int length = str.length():
    // for (int i = 0; i < length; i++) { ... }
    //
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'd' | str[i] == 's') {
            counter = counter + 1;
        }
    }

    cout << counter << endl;
}
