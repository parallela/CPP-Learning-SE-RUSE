using namespace std;

#include <iostream>
#include <algorithm>
#include <sstream>
#include <unordered_set>
#include <vector>

int main() {
    vector<int> chisla = {2, 1, 4, 5, 6, 7, 8, 0, 0};
    vector<int> chetni_chisla = {};
    vector<int> nechetni_chisla = {};
    int nulevi_stoinosti = 0;


    for (int i = 0; i < chisla.size(); ++i) {
        if (chisla[i] == 0) {
            nulevi_stoinosti += 1;
        }
        if (chisla[i] % 2 == 0) {
            chetni_chisla.push_back(chisla[i]);
        } else {
            nechetni_chisla.push_back(chisla[i]);
        }

    }

    cout << chetni_chisla.size() << " " << nechetni_chisla.size() << " " << nulevi_stoinosti;

    return 0;
}