using namespace std;

#include <iostream>
#include <algorithm>
#include <sstream>
#include <unordered_set>
#include <vector>

int main() {
    string str = "my cat is cat fat";

    istringstream ss(str);
    unordered_set <string> hsh;

    do {
        string word;
        ss >> word;

        while (hsh.find(word) == hsh.end()) {
            cout << word << " ";
            hsh.insert(word);
        }
    } while (ss);
    return 0;
}