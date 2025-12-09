#include "rabbit_popolation.h"

int main() {
    int n;
    cout << "Enter the number of months: ";
    cin >> n;

    int total = rabbit_pairs(n);
    cout << "Total number of rabbit pairs at month " << n << ": " << total << endl;

    return 0;
}