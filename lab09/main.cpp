#include <iostream>
#include <Windows.h>

using namespace std;

void s_calculation() {
}

void task_9_1() {
}

void task_9_2() {
}

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

void task_9_3() {
    int n;
    cout << "Enter a natural number between 0 and 500700: ";
    cin >> n;
    int d1 = (n & 1);
    int num_zeros = (d1 == 0) ? count_zeros(n) : 32 - count_zeros(n);
    cout << "Number of binary zeros: " << num_zeros << endl;
}

int main() {
    char input;
    do {
        cout << "Enter 'd' for s_calculation, 'g' for task 9.1, 'h' for task 9.2, or 'j' for task 9.3: ";
        cin >> input;
        switch (input) {
            case 'd':
                s_calculation();
                break;
            case 'g':
                task_9_1();
                break;
            case 'h':
                task_9_2();
                break;
            case 'j':
                task_9_3();
                break;
            case 'k':
            case 'K':
            case 'ê':
                cout << "Exiting program..." << endl;
                return 0;
            default:
                Beep(500, 500);
                break;
        }
    } while (true);
}


