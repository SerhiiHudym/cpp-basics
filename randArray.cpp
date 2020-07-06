#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    const int SIZE = 10;
    int arr[SIZE];

    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 20;
    }

    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}