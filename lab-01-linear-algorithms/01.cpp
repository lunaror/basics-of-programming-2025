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

    cout << "x = " << x << '\n';
    cout << "t = " << t << '\n';
    cout << "z = " << z << '\n';

    cout << "---------" << '\n';

    cout << "y = " << y << '\n';
    cout << "w = " << w << '\n';

    return 0;
}
