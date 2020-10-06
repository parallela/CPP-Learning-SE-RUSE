using namespace std;

#include <iostream>
#include<windows.h>

bool nameri_tochkata(int x1, int y1, int x2, int y2, int x, int y) {

    // Проверяване дали точката лежи в/у триъгълника.
    if (x > x1 && x < x2 && y > y1 && y < y2) {
        return true;
    }

    return false;
}

int main() {
    // Промяна на encoding-а на конзолата
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    // Иниц.. на променливите
    int x1 = 0, y1 = 0, x2 = 0, y2 = 0, x, y;

    // Въвеждане на долните и горните леви и десни ъгли на правоъгълника.
    cout << "Въведи x1: ";
    cin >> x1;
    cout << "Въведи y1: ";
    cin >> y1;
    cout << "Въведи x2: ";
    cin >> x2;
    cout << "Въведи y2: ";
    cin >> y2;


    // Въвеждане на точката
    cout << "Въведи x: ";
    cin >> x;
    cout << "Въведи y: ";
    cin >> y;

    // Проверяване на точката според кординатите на тригълника
    if (nameri_tochkata(x1, y1, x2, y2, x, y)) {
        cout << "Точката лежи в правоъгалника (Da) \n";
    } else {
        cout << "Точката не лежи в правоъгалника (Ne)\n";
    }

    return 0;
}