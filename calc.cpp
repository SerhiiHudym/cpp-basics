#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    int a, b, selection;
    cout << "Введите 2 числа" << endl;
    cin >> a >> b;

    cout << "Выберите математическую операцию" << endl <<
        "1. Сложение" << endl <<
        "2. Вычетание" << endl <<
        "3. Умножение" << endl <<
        "4. Деление" << endl;

    cin >> selection;

    switch (selection) {
        case 1:
            cout << "Результат сложения: " << a + b << endl;
            break;
        
        case 2:
            cout << "Результат вычитания: " << a - b << endl;
            break;
                    
        case 3:
            cout << "Результат умножения: " << a * b << endl;
            break;

        case 4:
            cout << "Результат деления: " << a / b << endl;
            break;

        default:
            cout << "Ошибка! Пункт меню отсутствует." << endl;
            break;
    }

    cout << setprecision(17) << 0.1 + 0.2 << endl;
    cout << 0.01 + 0.02 << endl;

    return 0;
}