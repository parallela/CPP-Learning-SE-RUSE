#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float x[10], y[10], n, r, a;

    system("chcp 1251");

    cout << "Vuvedete broi tochki: ";
    cin >> n;
    // Радиуса на кръга
    cout << "R: ";
    cin >> r;

    // Абсциса
    cout << "A: ";
    cin >> a;

    for (int i = 0; i < n; ++i) {
        // Въвеждаме брой точките
        cout << "Vuvedi " << i + 1 << "a tochka" << endl;
        cout << "x: ";
        cin >> x[i];
        cout << "y: ";
        cin >> y[i];

        /*
         * Проверяване дали предишните точки са същите като предишните
         */
        if (x[i] == x[i - 1] && y[i] == y[i - 1]) {
            cout << "Predishnata tochka e edna i sushta s tazi" << endl;
            break;
        }
    }
    // fabs();
    for (int i = 0; i < n; ++i) {
        if (fabs(x[i]) <= a && fabs(x[i]) < r && fabs(y[i]) < r && fabs(y[i]) <= a) {
            cout << "Tochka " << i + 1 << " e v tazi oblast" << endl;
        }
    }


    return 0;
}