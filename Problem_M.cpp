#include <iostream>
using namespace std;

int main() {
    char X;
    cin >> X;

    if (X >= 'a' && X <= 'z') {
        cout << "ALPHA" << endl << "IS SMALL" << endl;
    }
    else if (X >= '0' && X <= '9') {
        cout << "IS DIGIT" << endl;
    }
    else if (X >= 'A' && X <= 'Z') {
        cout << "ALPHA" << endl << "IS CAPITAL" << endl;
    }

    return 0;
}
