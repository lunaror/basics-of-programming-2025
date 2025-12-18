#include <iostream>
#include <math.h>

using namespace std;

class aytan {
    int a;
    int b;

  public:
    int vag1(int x1, int x2) {
        int f1;
        f1 = 2 * x1 - pow(x2, 2);
        return (f1);
    }
    int vag2(int x1, int x2) {
        int f2;
        f2 = 3 * x1 - x2;
        return (f2);
    }
};

aytan *x = new aytan; //  dinamik
aytan *y = new aytan; //  dinamik
aytan w, z;           //  statik

int main() {
    int d, c, p;
    int a1 = 2, a2 = 3, a3 = 4, a4 = 5, a5 = 2, a6 = 1;

    c = x->vag1(a1, a2);
    d = y->vag2(a3, a4);
    p = w.vag1(a5, a6);

    cout << c + d + p;
}
