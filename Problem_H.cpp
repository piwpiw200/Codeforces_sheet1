#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    int floor_result = A / B;
    int ceil_result = (A + B - 1) / B;
    int round_result = (A * 2 + B) / (2 * B);
    cout << "floor " << A << " / " << B << " = " << floor_result << endl;
    cout << "ceil " << A << " / " << B << " = " << ceil_result << endl;
    cout << "round " << A << " / " << B << " = " << round_result << endl;

    return 0;
}

