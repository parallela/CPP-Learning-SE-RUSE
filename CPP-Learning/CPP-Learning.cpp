using namespace std;

#include <iostream>
#include <algorithm>
#include <vector>

string removeVowels(string text) {
    vector<char> vowels = {
            'a', 'e', 'i', 'o', 'u',
            'A', 'E', 'I', 'O', 'U'
    };

    for (int i = 0; i < text.length(); i++) {
        if (find(vowels.begin(), vowels.end(), text[i]) != vowels.end()) {
            text = text.replace(i, 1, "");
            i -= 2;
        }
    }

    return text;
}

int main() {
    cout << removeVowels("This website is for losers LOL!") << endl;

    return 0;
}