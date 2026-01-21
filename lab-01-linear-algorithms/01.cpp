#include <cmath>
#include <iostream>

using namespace std;

int main() {
    // Read values x, t and z from the user input.
    float x, t, z;
    cin >> x >> t >> z;

    // We put dot after 6 and 1 to make result of division float, not int.
    float y = (2 * cos(x - M_PI / 6.)) / ((1. / 2) + pow(sin(t), 2));
    float w = y + pow(z, 2) / (3 + pow(z, 2) / 5.);

    cout << "x = " << x << endl;
    cout << "t = " << t << endl;
    cout << "z = " << z << endl;

    cout << "---------" << endl;

    cout << "y = " << y << endl;
    cout << "w = " << w << endl;

    return 0;
}
