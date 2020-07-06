#include <iostream>
using namespace std;

// Программа, проверяющая число, введённое
// с клавиатуры на чётность

int main() {
    setlocale(LC_ALL, "ru");

    int entered;
    cout << "Input a number: ";
    cin >> entered;

    if (entered % 2 == 0) {
        cout << "Your number is even.\n";
    } else {
        cout << "Your number is odd.\n";
    };


    cout << "Нажмите любую клавишу для выхода...";
    cin >> entered;

    return 0;
}

