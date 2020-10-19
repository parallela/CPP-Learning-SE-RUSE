#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

int main() {
    int n;
    float px, py, suma = 0, x[10], y[10];

    cout << "Enter N: " << endl;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cout << i + 1 << "." << endl;
        cout << "x = ";
        cin >> x[i];
        cout << "y = ";
        cin >> y[i];
    }


    for (int i = 0; i < n - 1; ++i) {
        px = x[i + 1] - x[i];
        py = y[i + 1] - y[i];
        suma = sqrt(px * px + py * py);
    }

    cout << suma << endl;


    return 0;
}