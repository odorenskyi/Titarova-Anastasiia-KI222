#include <iostream>

using namespace std;

int count_zeros(int n) {
    int count = 0;
    while (n > 0) {
        if ((n & 1) == 0) {
            count++;
        }
        n >>= 1;
    }
    return count;
}

int main() {
    int n;
    cout << "Enter a natural number between 0 and 500700: ";
    cin >> n;
    int d1 = (n & 1);
    int num_zeros = (d1 == 0) ? count_zeros(n) : 32 - count_zeros(n);
    cout << "Number of binary zeros: " << num_zeros << endl;
    return 0;
}

