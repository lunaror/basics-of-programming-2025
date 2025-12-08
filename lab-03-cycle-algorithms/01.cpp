#include <cmath>
#include <iostream>

using namespace std;

float equation(float x) {
    // Change equation according to the task.
    return exp(x) - exp(-x) - 2;
}

int main() {
    // Change values according to the task.
    float epsilon = 0.001;     // Error value.
    float equation_answer = 0; // Right side of the equation.

    float upper_bound = 1.0; // Upper limit of the interval.
    float lower_bound = 0.5; // Lower limit of the interval.
    float x, y, difference;

    while (true) {
        // Here we use half-division method to find approximate solution of the
        // equation. First we find value in the middle. If it is bigger than the
        // answer, middle becomes new upper bound. If it is smaller than the
        // answer, middle becomes new lower bound.
        x = (upper_bound + lower_bound) / 2;
        // I decided to use function for equation as this is the biggest
        // difference between all tasks.
        y = equation(x);
        difference = equation_answer - x;

        if (difference < epsilon) {
            // If answer is close enough (error is smaller than epsilon), we use
            // it (break from the cycle).
            break;
        } else if (difference < 0) {
            lower_bound = x;
        } else {
            upper_bound = x;
        }
    }

    cout << x;

    return 0;
}
