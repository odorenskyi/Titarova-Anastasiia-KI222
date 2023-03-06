#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

    string checkExpression(char a, char b) {
    bool result = a + 52 * b;
    return result ? "true" : "false";
}

double s_calculation();
    string calculateS() {
    double S = s_calculation();
    stringstream ss;
    ss << fixed << setprecision(2) << S;
    return ss.str();
}

void printResults(int x, int y, int z, char a, char b) {
    cout << "� Titarova Anastasia" << endl;
    cout << "a+52b? = " << checkExpression(a, b) << endl;
    cout << "x = " << dec << x << " (0x" << hex << x << ")" << endl;
    cout << "y = " << dec << y << " (0x" << hex << y << ")" << endl;
    cout << "z = " << dec << z << " (0x" << hex << z << ")" << endl;
    cout << "S = " << calculateS() << endl;
}
