#include <iostream>
using namespace std;

int main() {
    double A, B, C;
    cin >> A >> B >> C;

    double first, second, third;
    if (A <= B && B <= C) {
        first = A; second = B; third = C;
    }
    else if (A <= C && C <= B) {
        first = A; second = C; third = B;
    }
    else if (B <= A && A <= C) {
        first = B; second = A; third = C;
    }
    else if (B <= C && C <= A) {
        first = B; second = C; third = A;
    }
    else if (C <= A && A <= B) {
        first = C; second = A; third = B;
    }
    else {
        first = C; second = B; third = A;
    }
    cout << first << endl << second << endl << third << endl;
    cout << endl;
    cout << A << endl << B << endl << C << endl;

    return 0;
}
