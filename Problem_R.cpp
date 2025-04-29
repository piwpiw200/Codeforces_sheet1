#include <iostream>
using namespace std;

void daysToDate(int totalDays) {
    int years = totalDays / 365;
    int remainingDays = totalDays % 365;
    int months = remainingDays / 30;
    int days = remainingDays % 30;

    cout << years << " years" << endl;
    cout << months << " months" << endl;
    cout << days << " days" << endl;
}

int main() {
    int days;
    cin >> days;
    daysToDate(days);
    return 0;
}
