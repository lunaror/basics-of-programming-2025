#include <cmath>
#include <iostream>

using namespace std;

int main() {
    float a = -0.5;
    float b = 2;

    float t, y;
    cin >> t;

    if (t < 2) {
        y = a * pow(t, 2) * log(t);
    } else if (t == 2) {
        y = 1;
    } else { // i.e. t > 2
        y = a * cos(b * t);
    }

    cout << "y = " << y << endl;

    return 0;
}
