#include<iostream>


int liceNaPrvTrg(int a, int b) {
    return (a * b / 2);
}


int main() {
    const int n = 5;
    int a[n], b[n];

    for (int i = 0; i < n; ++i) {
        std::cout << "A=";
        std::cin >> a[i];
        std::cout << "B=";
        std::cin >> b[i];
    }

    for (int i = 0; i < n; ++i) {
        std::cout << i << ". " << liceNaPrvTrg(a[i], b[i]) << std::endl;
    }


    return 0;
}