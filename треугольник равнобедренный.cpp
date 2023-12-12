#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RUS");
    int N;
    cout << "Введите N (нечетное, натуральное, >= 3): " << endl;
    cin >> N;
    while (N % 2 == 0 || N < 3) {
        cout << "Некорректное значение N. Пожалуйста, введите нечетное, натуральное число, большее или равное 3." << endl;
        cin >> N;
    }

    for (int i = 0; i < (N + 1) / 2; ++i) {
        for (int j = 0; j < (N - 1) / 2 - i; ++j) {
            cout << ' ';
        }
        for (int k = 0; k < 2 * i + 1; ++k) {
            cout << '*';
        }
        cout << endl;
    }

    return 0;
}
