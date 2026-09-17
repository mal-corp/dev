#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    setlocale(LC_ALL,"Russian");
    // Число генерируется случайным образом от 1 до 100
    int secretNumber = rand() % 100 + 1;
    int guess = 0;

    cout << "Угадай число от 1 до 100!" << endl;

    // Цикл работает, пока игрок не угадает
    while (guess != secretNumber) {
        cout << "Введи число: ";
        cin >> guess;

        if (guess > secretNumber) {
            cout << "Меньше!" << endl;
        } else if (guess < secretNumber) {
            cout << "Больше!" << endl;
        }
    }

    cout << "Правильно! Ты победил!" << endl;
    return 0;
}
