#include <iostream>

using namespace std;

// Prototypes of the functions. They will be declared after the main function,
// but to use them now we need to define then as the prototypes.
int SUM(int array[], int n);
int PROD(int array[], int n);
int MIN(int array[], int n);
int MAX(int array[], int n);

int main() {
    int T[10] = {3, 2, 1, 7, 2, 1, 4, 6, 6, 7};
    int P[10] = {7, 8, 6, 6, 8, 3, 6, 8, 9, 7};
    int Q[10] = {3, 1, 5, 1, 4, 7, 5, 8, 7, 8};
    int R[10] = {5, 7, 4, 2, 5, 2, 8, 7, 3, 8};

    // The only difference between tasks is this part. Uncomment the line you
    // need.
    int Y = MAX(T, 5) * MIN(P, 7) + MAX(Q, 8) * PROD(R, 4); // 1
    // int Y = MIN(T, 6) * SUM(P, 8) + MIN(Q, 7) * PROD(R, 9);  // 2
    // int Y = PROD(T, 9) * MAX(P, 8) + MAX(Q, 6) * SUM(R, 7);  // 3
    // int Y = MAX(T, 5) / SUM(P, 6) + MIN(Q, 6) / PROD(R, 3);  // 4
    // int Y = MAX(T, 7) / SUM(P, 4) + MIN(Q, 8) / PROD(R, 4);  // 5
    // int Y = SUM(T, 8) / MAX(P, 5) - PROD(Q, 5) / MIN(R, 7);  // 6
    // int Y = MIN(T, 5) / MAX(P, 6) - MAX(Q, 6) / MIN(R, 9);   // 7
    // int Y = PROD(T, 7) / MIN(P, 6) + SUM(Q, 6) * MAX(R, 9);  // 8
    // int Y = MAX(T, 8) / SUM(P, 6) - PROD(Q, 6) * MIN(R, 9);  // 9
    // int Y = SUM(Q, 8) / PROD(P, 6) - MIN(T, 4) / MAX(R, 9);  // 10
    // int Y = SUM(Q, 7) - PROD(P, 4) + MIN(T, 5) * MAX(R, 6);  // 11
    // int Y = PROD(Q, 10) * SUM(P, 4) + MIN(T, 9) / MAX(R, 4); // 12
    // int Y = MAX(Q, 10) * SUM(P, 10) + MAX(T, 9) / MIN(R, 8); // 13
    // int Y = PROD(Q, 8) * MIN(P, 9) + SUM(T, 7) / MAX(R, 6);  // 14
    // int Y = MIN(Q, 9) * SUM(P, 8) - MAX(T, 6) / MIN(R, 7);   // 15

    cout << "Y = " << Y << endl;

    return 0;
}

int SUM(int array[], int n) {
    int array_sum = 0;

    for (int i = 0; i < n; i++) {
        array_sum += array[i];
    }

    return array_sum;
}

// Actual functions are defined there.
int PROD(int array[], int n) {
    int array_prod = 1;

    for (int i = 0; i < n; i++) {
        array_prod *= array[i];
    }

    return array_prod;
}

int MIN(int array[], int n) {
    int least_value = array[0];

    for (int i = 1; i < n; i++) {
        if (array[i] < least_value) {
            least_value = array[i];
        }
    }

    return least_value;
}

int MAX(int array[], int n) {
    int greatest_value = array[0];

    for (int i = 1; i < n; i++) {
        if (array[i] > greatest_value) {
            greatest_value = array[i];
        }
    }

    return greatest_value;
}
