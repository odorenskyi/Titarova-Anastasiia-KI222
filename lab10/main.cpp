#include <iostream>
#include <fstream>
#include <ctime>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(1251)
    SetConsoleCP(1251)
    string inputFile = "input.txt";
    string outputFile = "output.txt";

    ifstream input(inputFile);
    ofstream output(outputFile, ios::app);
    if (input.is_open() && output.is_open()) {
        string inputText;
        getline(input, inputText);

        output << "Кількість символів у файлі: " << inputText.length() << endl;

        time_t now = time(0);
        string date = ctime(&now);
        output << "Дата дозапису: " << date;

        input.close();
        output.close();
        cout << "Дозапис успішно виконано." << endl;
    } else {
        cout << "Помилка при відкритті файлів." << endl;
    }

    return 0;
}

