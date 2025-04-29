#include <iostream>
using namespace std;

int main() {
    long long N, M;
    cin >> N >> M;
    int lDN = N % 10;
    int lDM = M % 10;
    cout << lDN + lDM << endl;
    return 0;
}
