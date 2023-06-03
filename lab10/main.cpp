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

        output << "ʳ������ ������� � ����: " << inputText.length() << endl;

        time_t now = time(0);
        string date = ctime(&now);
        output << "���� ��������: " << date;

        input.close();
        output.close();
        cout << "������� ������ ��������." << endl;
    } else {
        cout << "������� ��� ������� �����." << endl;
    }

    return 0;
}

