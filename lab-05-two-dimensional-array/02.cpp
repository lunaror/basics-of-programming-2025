#include <iostream>

using namespace std;

int main() {
    int B[3][4] = {
        {1, 2, 3, 4}, // row 0
        {6, 7, 8, 9}, // row 1
        {1, 2, 3, 4}, // row 2
    };

    int sum = 0;
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 4; c++) {
            sum += B[r][c];
        }
    }

    cout << (float)sum / (3 * 4) << endl;

    return 0;
}
