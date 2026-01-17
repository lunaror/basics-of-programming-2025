#include <iostream>

using namespace std;

int main() {
    string given = "This is solution 14 of the lab 06. Year 2026.";
    int counter = 0;

    for (int i = 0; i < given.length(); i++) {
        if (given[i] >= '0' && given[i] <= '9') {
            counter++;
        }
    }

    cout << counter << '\n';

    return 0;
}
